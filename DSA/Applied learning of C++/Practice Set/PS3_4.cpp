#include<bits/stdc++.h>
using namespace std;

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int _t; cin>>_t;
    string s; getline(cin,s);
    while(_t--){
        getline(cin,s);
        for (int i = 0; i < s.length(); i++)
        {
            s[i]=tolower(s[i]);
        }
        for (int i = 0; i < 26; i++)
        {
            int count = 0;
            for (int j = 0; j < s.length(); j++)
            {
                if (int(s[j])==97+i){
                        count=count+1;
                }
            }
            cout<<count<<" ";
            
        }
    }
}