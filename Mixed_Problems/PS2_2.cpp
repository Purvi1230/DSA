#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin>>n;
    map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        int x; cin>>x; m[x]++;
    }
    int del = 0;
    for (auto it : m)
    {
        if (it.second>=it.first)
        {
            del+= (it.second - it.first);
        }else{
            del+=it.second;
        }
    }
    cout<<del<<'\n';
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int _t;cin>>_t;while(_t--)
    solve();
}