#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,m; cin>>n>>m;
    map<int, bool> m1;
    for (int i = 0; i < n; i++)
    {
        int x; cin>>x;
        m1[x]=1;
    }
    for (int i = 0; i < m; i++)
    {
        int x; cin>>x;
        if(m1.count(x)){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
            m1[x]=1;
        }
    }
    
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int _t;cin>>_t;while(_t--)
    solve();
}