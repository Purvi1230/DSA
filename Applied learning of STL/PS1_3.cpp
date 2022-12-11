#include<bits/stdc++.h>
using namespace std;
bool comp(pair<string, int>a, pair<string,int>b){
    return a.second<b.second;
}

void solve(){
    int N; cin>>N;
    vector<pair<string, int>> v;
    for (int i = 0; i < N; i++){
        string s; int r; cin>>s>>r;
        v.push_back({s,r});
    }
    sort(v.begin(), v.end(), comp);
    for (int i = 0; i < N; i++){
        cout<<v[i].first<<" "<<v[i].second<<'\n';
    }
    
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int _t;cin>>_t;while(_t--)
    solve();
}