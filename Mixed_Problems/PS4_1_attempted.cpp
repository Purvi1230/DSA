#include<bits/stdc++.h>
using namespace std;
#define long long

void solve(){
    int n, q; cin>>n>>q;
    set<int> s; vector<int> v;
    vector<vector<int>> b(n+1);
    int last = 0;
    for(int i = 0; i<q; i++){
        int x, y;
        cin>>x>>y;
        if(x==1){
            v.push_back(i);
            b[x].push_back(i);
            s.insert(i);
        }else if(x==2){
            for (int j = 0; j < b[x].size(); j++)
            {
                s.erase(b[x][j]);
            }
            b[x].clear();
        }
        else if(x==3){
            while(last<x){
                s.erase(v[last]);
                last++;
            }
        }
        cout<<s.size()<<'\n';
    }
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int _t;cin>>_t;while(_t--)
    solve();
}