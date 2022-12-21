#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin>>n;
    multiset<int>s; int b =1;
    for (int i = 0; i < n; i++)
    {
        int x; cin>>x;
        if(x>b){
            s.insert(x);
        }
        while(!s.empty() && *s.begin()<=b){
            s.erase(s.begin());
        }
        if(s.size()>b){
            b++;
        }
        cout<<b<<" ";
    }cout<<'\n';
    
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int _t;cin>>_t;while(_t--)
    solve();
}