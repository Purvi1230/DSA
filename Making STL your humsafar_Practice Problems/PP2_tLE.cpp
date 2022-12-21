#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n,k; cin>>n>>k; int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    int max;
    for(int i = 0; i<=(n-k); i++){
        max = arr[i];
        for(int j = 0; j<k ; j++){
            if(arr[i+j]>max){
                max = arr[i+j];
            }
        }
        cout<<max<<" ";
    }
    cout<<'\n';
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin>>t; while(t--)
    solve();
}