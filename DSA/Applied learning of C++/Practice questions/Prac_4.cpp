#include<bits/stdc++.h>
using namespace std;

void solve(){
    int N;
    cin>>N;
    int sum = 0;
    for (int i = 0; i <= N; i++)
    {
     sum = i+sum;
    }
    cout<<sum;
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    //int_t;cin>>_t;while(_t--)
    solve();
}