#include <bits/stdc++.h>
using namespace std;

void solve(){
    int m, n; cin>>n>>m;
    map<int, bool> mp;
    for(int i = 0; i<n; i++){
        int x; cin>>x; mp[x]=1;
    }
    for(int i = 0; i<m; i++){
        int x; cin>>x; 
        if(mp.count(x)){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
            mp[x]=1;
        }
    }
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin>>t; while(t--)
    solve();
}