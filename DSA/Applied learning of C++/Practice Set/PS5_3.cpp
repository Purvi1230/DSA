#include<bits/stdc++.h>
using namespace std;

void solve(){
    int N, B; cin>>N>>B;
    int arr[N];
    for (int i = 0; i < N; i++){
        cin>>arr[i];
    }
    // for (int i = 1; i < N; i++){
    //     if (arr[i-1]>arr[i]){
    //         int temp;
    //         temp=arr[i-1];
    //         arr[i-1] = arr[i];
    //         arr[i]=temp;
    //     }   
    // }
    sort(arr, arr+N);
    int count = 0, total = 0;
    for (int i = 0; i < N; i++){
        total+=arr[i];
        if (total>B)
        {
            break;
        }
        count++;
    }
    cout<<count<<'\n';
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int _t;cin>>_t;while(_t--)
    solve();
}