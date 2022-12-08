#include<bits/stdc++.h>
using namespace std;

void solve(){
    int N,M,P;
    cin>>N>>M>>P;
    for (int i = 0; i < ((P+1)*N+1); i++)
    {
        for (int j = 0; j < ((P+1)*M+1); j++) //per row
            if (i%(P+1)==0 || j%(P+1)==0)
            {
                cout<<"*";
            }else if ((i-j)%((P+1)*2)==0)
            {
                cout<<"\\";
            }
            else if ((i+j)%((P+1)*2)==0)
            {
                cout<<"/";
            }
            else{
                cout<<".";
            }
        cout<<'\n';
    }
    
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int _t;cin>>_t;while(_t--)
    solve();
}