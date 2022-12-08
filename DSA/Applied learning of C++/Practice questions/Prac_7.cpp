#include<bits/stdc++.h>
using namespace std;

void solve(){
    char ch;
    cin>>ch;
    if (ch>='0'&&ch<='9')
    {
        cout<<"digit";
    }else
    {
        cout<<"ALPHA"<<endl;
        if (ch>='a'&&ch<='z')
        {
            cout<<"IS SMALL";
        }else
        {
            cout<<"IS CAPITAL";
        }
        
        
    }
    
    // else if (ch>='a'&&ch<='z')
    // {
    //     cout<<"alpha is small";
    // }
    // else 
    // {
    //     cout<<"alpha is capital";
    // }
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    //int_t;cin>>_t;while(_t--)
    solve();
}