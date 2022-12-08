#include<bits/stdc++.h>
using namespace std;

void solve(){
    double X1, Y1, X2, Y2;
    cin>>X1>>Y1>>X2>>Y2;
    double eucl_dist = sqrt((X2-X1)*(X2-X1)+(Y2-Y1)*(Y2-Y1)); //Point A(X1, Y1), B(X2, Y2); C(X2, Y1)
    double man_dist = abs(X2-X1) + abs(Y2-Y1);
    cout<<fixed<<setprecision(7);
    cout<<eucl_dist<<" "<<man_dist<<'\n';
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int _t;cin>>_t;while(_t--)
    solve();
}