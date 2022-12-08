#include<bits/stdc++.h>
using namespace std;

void solve(){
    int N; cin>>N; int arr[N];
    for (int i = 0; i < N; i++){
        cin>>arr[i];
    }
    int count = 0;
    for (int i = 1; i < N; i++){
        
        if (arr[i]<arr[i-1]){
            int change = arr[i-1]-arr[i];
            count+=change;
            arr[i]+=change;
        }
    }
    cout<<count<<'\n';
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int _t;cin>>_t;while(_t--)
    solve();
}