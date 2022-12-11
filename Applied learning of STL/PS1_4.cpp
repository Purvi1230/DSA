#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,q; cin>>n>>q;
    vector<int>v;
    for (int i = 0; i < n; i++){
        int x; cin>>x; v.push_back(x);
    }
    sort(v.begin(), v.end());
    while (q--){
        int t, x; cin>>t>>x;
        if(t == 1){
            int i = lower_bound(v.begin(), v.end(), x) - v.begin();
            if(i == n) cout <<"-1 ";
            else cout<< v[i]<<" ";
        }else if(t == 2){
            int i = upper_bound(v.begin(), v.end(), x) - v.begin();
            if(i == n) cout <<"-1 ";
            else cout<< v[i]<<" ";
        }else if(t == 3){
            auto it = upper_bound(v.begin(), v.end(), x) - v.begin();
            cout<< it<<" ";
        }else{
            auto it = lower_bound(v.begin(), v.end(), x) - v.begin();
            cout<< it<<" ";
        }
    } 
    cout<<'\n' ;
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int _t;cin>>_t;while(_t--)
    solve();
}