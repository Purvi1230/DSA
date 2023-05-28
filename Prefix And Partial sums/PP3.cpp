#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,m,q; cin>>n>>m>>q;
    int arr[n];
    long long brr[n+1];
    memset(brr, 0, sizeof(brr));
    for(int i = 0; i<n; i++) cin>>arr[i];
    for(int i = 0; i<m; i++){
        int l,r; cin>>l>>r;
        brr[l-1]++;
        brr[r]--;
    }
    for(int i = 1; i<=n; i++) brr[i]+=brr[i-1];
    vector<pair<int, int>> v;
    for(int i = 0; i<n; i++) v.push_back({arr[i], brr[i]});
    sort(v.begin(), v.end());
    brr[0] = v[0].second;
    for(int i = 1; i<n; i++){
        brr[i] = v[i].second;
        brr[i]+=brr[i-1];
    }
    while(q--){
        long long k; cin>>k;
        int idx = lower_bound(brr, brr+n, k)-brr;
        cout<<(idx<n ? v[idx].first: -1)<<' ';
    }cout<<'\n';
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int _t;cin>>_t;while(_t--)
    solve();
}