#include<bits/stdc++.h>
using namespace std;

void solve(){
    int q; cin>>q;
    set<int> s;
    while(q--){
        string x; cin>>x;
        if(x == "add"){
            int y; cin>>y;
            s.insert(y);
        }else if(x == "erase"){
            int y; cin>>y;
            if(s.find(y)!=s.end()){
                s.erase(y);
            }
        }else if(x=="find"){
            int y; cin>>y;
            if(s.find(y)!=s.end()){
                cout<<"YES\n";
            }else{
                cout<<"NO\n";
            }
        }else if(x == "print"){
            for (int i:s)
            {
                cout<<i<<" ";
            }
            cout<<"\n";
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