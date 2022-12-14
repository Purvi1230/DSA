#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n, q; cin>>n>>q; int m = 0;
    deque<int> d;
    for (int i = 0; i < n; i++)
    {
        int x; cin>>x;
        d.push_back(x);
        m = max(m, x);
    }
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if(d[i]==m){
            j = i;
            break;
        }
    }
    vector<pair<int,int>> v;
    v.push_back({0, 0});
    for (int i = 0; i <= j; i++)
    {
        int a = d.front(); d.pop_front();
        int b = d.front(); d.pop_front();
        v.push_back({a,b});
        if(a>b){
            d.push_front(a);
            d.push_back(b);
        }else{
            d.push_front(b);
            d.push_back(a);
        }
    }
    d.pop_front(); n--;
    while(q--){
        int x; cin>>x;
        if(x<v.size()){
            cout<<v[x].first << " " << v[x].second << '\n';
        }else{
            cout<< m << " " << d[(x - v.size())%n] << '\n'; 
        }
    }
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int _t;cin>>_t;while(_t--)
    solve();
}