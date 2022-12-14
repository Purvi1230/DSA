#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n; cin>>n;
    int a[n], b[n];
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin>>b[i];
        v.push_back(a[i]-b[i]);
    }
    sort(v.begin(),v.end());
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        int x = upper_bound(v.begin(), v.end(), -v[i])-v.begin();
        count += max(0ll, i-x);
    }
    cout<<count<<'\n';
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int _t;cin>>_t;while(_t--)
    solve();
}