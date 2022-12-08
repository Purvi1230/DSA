#include<bits/stdc++.h>
using namespace std;

void solve(){
    int X1, Y1, X2, Y2; cin>>X1>>Y1>>X2>>Y2;
    int X3, Y3, X4, Y4; cin>>X3>>Y3>>X4>>Y4;
    //4 Coordinates -> A(X1, Y1)->(X1,Y2)->(X2, Y2)->(X2,Y1)
    //Similarly -> A(X3, Y3)->(X3,Y4)->(X4, Y4)->(X4,Y3)
    int a1 = max(X1, X3), b1 = max(Y1, Y3);
    int a2 = min(X2,X4), b2 = min(Y2, Y4);
    int ri=0;
    if (a1<=a2 && b1<=b2){
        ri = (a2-a1)*(b2-b1);
    }
    int r1 = (X2-X1)*(Y2-Y1);
    int r2 = (X4-X3)*(Y4-Y3);
    cout<<ri<<" "<<r1+r2-ri<<'\n';
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int _t;cin>>_t;while(_t--)
    solve();
}