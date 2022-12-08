#include<bits/stdc++.h>
using namespace std;

void solve(){
    string N;
    cin>>N;
    int sum=0;
    for (int i = 0; i < N.length(); i++)
    {
        sum += (N[i]-'0');
    }
    cout<<sum<<'\n';
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int _t;cin>>_t;while(_t--)
    solve();
}