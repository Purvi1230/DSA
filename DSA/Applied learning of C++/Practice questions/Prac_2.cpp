#include<bits/stdc++.h>
using namespace std;

// #define endl '\n'. Now you can use endl without thinking much about the space problem

void solve(){
    int x,y;
    cin>>x>>y;
    cout<<x<<" + "<<y<<" = "<<x+y<<'\n';
    cout<<x<<" * "<<y<<" = "<<1LL*x*y<<'\n';
    cout<<x<<" - "<<y<<" = "<<x-y<<'\n';
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // int_t;cin>>_t;while(_t--)
    solve();
}