#include<bits/stdc++.h>
using namespace std;

long double PI = acos(-1.0);

void solve(){
    long double r;
    cin>>r;
    cout<<"Area of circle ="<<fixed<<setprecision(9)<<PI*r*r;
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    //int_t;cin>>_t;while(_t--)
    solve();
}