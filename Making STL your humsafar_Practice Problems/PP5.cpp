#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n, q; cin>>n>>q; int a[n];
    for(int i = 0; i<n; i++){
        cin>>a[i];
    } sort(a, a+n);
    for(int i = 1; i<n; i++){
        a[i]+=a[i-1];
    }
    while(q--){
        int m; cin>>m;
        auto it = upper_bound(a, a+n, m);
        int count = it - a;
        cout<<count<<'\n';
    } 
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    solve();
}