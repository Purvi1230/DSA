#include<bits/stdc++.h>
using namespace std;

int pre(char c){
    if(c=='+'||c=='-')
        return 1;
    else if(c=='*'||c=='/')
        return 2;
    else if(c=='^')
        return 3;
    else
        return -1;
}

void solve(){
    string s; cin>>s;
    stack<char>st; string ans;
    for (int i = 0; i < s.size(); i++){
        if (s[i]>='a'&& s[i]<='z')
        {
            ans += s[i];
        } else if(s[i]=='('){
            st.push('(');
        }else if(s[i]==')'){
            while (!st.empty() && st.top()!='(')
            {
                ans+=st.top();
                st.pop();
            }
            if(!st.empty() && st.top()=='('){
                st.pop();
            }
        }else{
            while(!st.empty() && pre(s[i]) <= pre(st.top())){
                ans +=st.top();
                st.pop();
            }
            st.push(s[i]);
        }
    }
    while (!st.empty()){
        ans+=st.top();
        st.pop();
    }
    cout<<ans<<'\n';
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int _t;cin>>_t;while(_t--)
    solve();
}