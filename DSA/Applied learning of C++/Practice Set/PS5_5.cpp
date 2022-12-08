#include<bits/stdc++.h>
using namespace std;

void solve(){
    int a[7]; string s;
    for (int i = 0; i < 6; i++){
        cin>>a[i+1];
    }
    cin>>s;
    for (int i = 0; i < s.size(); i++){
        if (s[i]=='N'){
            int t = a[1];
            a[1]=a[2];
            a[2]=a[6];
            a[6]=a[5];
            a[5]=t;
        }else if(s[i]=='S'){
            int t =a[1];
            a[1]=a[5];
            a[5]=a[6];
            a[6]=a[2];
            a[2]=t;
        }else if(s[i]=='E'){
            int t =a[1];
            a[1]=a[4];
            a[4]=a[6];
            a[6]=a[3];
            a[3]=t;
        }else if(s[i]=='W'){
            int t =a[1];
            a[1]=a[3];
            a[3]=a[6];
            a[6]=a[4];
            a[4]=t;
        }  
    }
    cout<<a[i]<<'\n';
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int _t;cin>>_t;while(_t--)
    solve();
}