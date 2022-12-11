#include<bits/stdc++.h>
using namespace std;

void solve(){
    int q; cin>>q;
    priority_queue<int>p;
    while(q--){
        string s; cin>>s;
        if(s=="add"){
            int x; cin>>x;
            p.push(x);
        }else if(s=="remove"){
            if (!p.empty())
            {
                p.pop();
            }
        }else{
            if (!p.empty())
            {
                cout<<p.top()<<'\n';
            }else{
                cout<<"0\n";
            }
        }
    }
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int _t;cin>>_t;while(_t--)
    solve();
}