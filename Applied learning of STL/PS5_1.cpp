#include<bits/stdc++.h>
using namespace std;

void solve(){
    int q; cin>>q;
    multimap<string, int>m;
    while(q--){
        string s; cin>>s;
        if(s=="add"){
            string x; int y;
            cin>>x>>y;
            m.insert({x, y}); 
        }else if(s == "erase"){
            string a; cin>>a;
            if(m.find(a) != m.end()) {
                m.erase(m.find(a));
            }
        }else if(s == "eraseall"){
            string a; cin>>a;
            if(m.find(a) != m.end()) {
                m.erase(a);
            }
        }else{
            string x; cin>>x;
            auto it = m.find(x);
            if (it!=m.end()){
                cout<<(*it).second<<'\n';
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