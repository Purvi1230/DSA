#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n, m; cin>>n>>m; int arr[n];
    for(int i =0; i<n; i++){
        cin>>arr[i];
    } sort(arr, arr+n);
    int count = 0;
    for(int i = 0; i<n; i++){
        if(m>=arr[i]){
            m = m-arr[i];
            count++;
        }
    }
    cout<<count<<'\n';
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int t; cin>>t; while(t--){
        solve();
    }
}