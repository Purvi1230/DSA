#include<bits/stdc++.h>
using namespace std;

void solve(){
    string s; cin>>s;
    stack<char>st;
    int ans = 0;
    for (int i = 0; i < s.size(); i++){
        if(s[i]=='('){
            st.push('(');
        }else{
            if (st.empty()){
                ans++;
            }else{
                st.pop();
            }  
        }
    }
    while(!st.empty()){
        st.pop();
        ans++;
    }
    cout<<ans<<'\n';
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int _t;cin>>_t;while(_t--)
    solve();
}