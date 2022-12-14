#include<bits/stdc++.h>
using namespace std;

void solve(){
    string s; cin>>s;
    int q; cin>>q;
    set<int> st[26];
    for (int i = 0; i < s.size(); i++)
    {
        st[s[i]-'a'].insert(i+1);
    }
    
    while(q--){
        int t; cin>>t; 
        if (t==1)
        {
            int pos; char c; cin>>pos>>c;
            st[s[pos-1]-'a'].erase(pos);
            st[c-'a'].insert(pos);
            s[pos-1] = c;
        }
        else{
            int l, r; cin>>l>>r; int ans = 0;
            for (int i=0; i < 26; i++)
            {
                auto it = st[i].lower_bound(l);
                if (it == st[i].end())
                    continue;
                if(l<=*it && *it<=r){
                    ans++;
                }     
            }
            cout<<ans<<'\n';
        }
    }
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int _t;cin>>_t;while(_t--)
    solve();
}