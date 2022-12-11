#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n, k; cin>>n>>k;
    multiset<int>m;
    for (int i = 0; i < n; i++)
    {
        int x; cin>>x;
        m.insert(x);
    }
    int total = 0;
    for (int i = 0; i < k; i++)
    {
        auto last = m.end();
        last--;
        int x = *last;
        total+=x;
        m.erase(last);
        m.insert(x/2);
    }
    cout<<total<<'\n'; 
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int _t;cin>>_t;while(_t--)
    solve();
}