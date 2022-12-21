#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n,m; cin>>n>>m;
    map<int, int> cnt;
    for(int i = 0; i<n; i++){
        int x, u; cin>>x>>u;
        cnt[x*u]++;
    }
    int count = 0;
    for(int i = 0; i<m; i++){
        int y, v; cin>>y>>v;
        if(cnt[y*v]>0){
            count++;
            cnt[y*v]--;
        }
    }
    cout<<count<<'\n';
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin>>t; while(t--){
        solve();
    }
}