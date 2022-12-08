#include<bits/stdc++.h>
using namespace std;

using ld = long double;

void solve(){
    ld a,b,c,d;
    cin>>a>>b>>c>>d;
    
    if(b*log(a)>d*log(c)+1e-12){
        cout<<"YES\n";
    }else{
        cout<<"NO\n";
    }
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    //int_t;cin>>_t;while(_t--)
    solve();
}