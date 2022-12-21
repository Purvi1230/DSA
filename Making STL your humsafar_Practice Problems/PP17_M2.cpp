#include<bits/stdc++.h>
using namespace std;

#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define int long long
#define ld long double
#define f first
#define s second
const int N=100010;
int mod=1e9+7;

signed main()
{
    IOS;
    int t=1;
    //cin>>t;
    while(t--)
    {
        string s;cin>>s;
        stack<pair<string,int>> st;
        for(int i=0;i<(int)s.length();i++)
        {
            if(s[i]=='(')
                st.push({"(",-1});
            else if(s[i]==')')
            {
                int mul=0;
                while(i+1<(int)s.length()&&s[i+1]>='0'&&s[i+1]<='9')
                {
                    mul*=10;
                    mul+=s[i+1]-'0';
                    i++;
                }
                if(!mul)
                    mul=1;
                stack<pair<string,int>> temp;
                while(!st.empty())
                {
                    auto it=st.top();
                    st.pop();
                    if(it.f=="(")
                        break;
                    temp.push({it.f,it.s*mul});
                }
                while(!temp.empty())
                {
                    st.push(temp.top());
                    temp.pop();
                }
            }
            else if(s[i]>='A'&&s[i]<='Z')
            {
                string atom="";
                atom+=s[i];
                while(i+1<(int)s.length()&&s[i+1]>='a'&&s[i+1]<='z')
                {
                    atom+=s[i+1];
                    i++;
                }
                int cnt=0;
                while(i+1<(int)s.length()&&s[i+1]>='0'&&s[i+1]<='9')
                {
                    cnt*=10;
                    cnt+=s[i+1]-'0';
                    i++;
                }
                if(!cnt)
                    cnt=1;
                st.push({atom,cnt});
            }
        }
        map<string,int> m;
        while(!st.empty())
        {
            m[st.top().f]+=st.top().s;
            st.pop();
        }
        string res="";
        for(auto it:m)
        {
            res+=it.f;
            if(it.s>1)
                res+=to_string(it.s);
        }
        cout<<res<<"\n";
    }
    return 0;
}