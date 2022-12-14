#include<bits/stdc++.h>
using namespace std;

void solve(){
    int q, x; cin>>q>>x;
    vector <int> v[x];
    set<int> s;
    for (int i = 0; i <= q; i++)
    {
        s.insert(i);
    }
    while (q--)
    {
        int t; cin>>t;
        t%=x;
        if(v[t].empty()){
            v[t].push_back(t);
        }else{
            int xx = v[t].back();
            v[t].push_back(xx+x);
            t = xx+x;
        }
        s.erase(t);
        cout<<*s.begin()<<" ";
    }
    cout<<'\n';
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int _t;cin>>_t;while(_t--)
    solve();
}