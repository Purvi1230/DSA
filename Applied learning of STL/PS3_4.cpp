#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin>>n;
    set<int> s;
    for (int i = 0; i < n; i++)
    {
        int a; cin>>a; s.insert(a);
    }
    s.erase(s.begin());
    if (!s.empty())
    {
        int it = *s.begin();
        cout<<it<<'\n';
    }else{
        cout<<"-1\n";
    }
    
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int _t;cin>>_t;while(_t--)
    solve();
}