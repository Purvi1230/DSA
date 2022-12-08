#include<bits/stdc++.h>
using namespace std;

#define int long long

void solve(){
    int N; cin>>N;
    int count = 0;
    while (N)
    {
        count = count + N/5;
        N/=5;
    }
    
    cout<<count<<'\n';
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int _t;cin>>_t;while(_t--)
    solve();
}