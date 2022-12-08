#include<bits/stdc++.h>
using namespace std;

void solve(){
    int N,M;
    cin>>N>>M;
    for (int i = 0; i < (3*N+1); i++) // controls number of columns
    {
        for (int j = 0; j < (3*M+1); j++) //controls number within the rows
        {
            if (i%3==0 || j%3==0)
            {
                cout<<"*";
            }else{
                cout<<".";
            }
            
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