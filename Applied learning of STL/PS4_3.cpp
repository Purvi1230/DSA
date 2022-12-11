#include<bits/stdc++.h>
using namespace std;

void solve(){
    int q; cin>>q;
    multiset<int>s;
    while(q--){
        string x; cin>>x;
        if(x == "add"){
            int a; cin>>a;
            s.insert(a);
        }else if(x == "erase"){
            int a; cin>>a;
            if(s.find(a) != s.end()) {
                s.erase(s.find(a));
            }
        }else if(x == "eraseall"){
            int a; cin>>a;
            if(s.find(a) != s.end()) {
                s.erase(a);
            }
        }else if(x == "find"){
            int a; cin>>a;
            if (s.find(a)!=s.end()){
                cout<<"YES\n";
            }else{
                cout<<"NO\n";
            }   
        }else if(x == "count"){
            int a; cin>>a;
            cout<<s.count(a)<<'\n';
        }else if(x == "print"){
            for(int i: s){
                cout<<i<<" ";
            }
            cout<<'\n';
        }else{
            s.clear();
        }
    }
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int _t;cin>>_t;while(_t--)
    solve();
}