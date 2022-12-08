#include<bits/stdc++.h>
using namespace std;

void solve(){
    int A, B;
    cin>>A>>B;
    cout<<A/B<<endl;//floor
    cout<<(A+B-1)/B<<endl;//ceil
    cout<<(2*A+B)/(2*B)<<endl;//round
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    //int_t;cin>>_t;while(_t--)
    solve();
}