#include<bits/stdc++.h>
using namespace std;

void solve(){
    int X;
    string M;
    cin>>X>>M;
    int Z=stoi(M.substr(M.find('.') + 1));
    int Y=stoi(M.substr(0,M.find('.')));
    cout<<Z+X<<"."<<Y+X<<'\n';
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int _t;
    cin>>_t;
    while(_t--)
    solve();
}
