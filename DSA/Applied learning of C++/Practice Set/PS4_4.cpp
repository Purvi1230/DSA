#include<bits/stdc++.h>
using namespace std;

void solve(){
    int Q, N, s=0, c=0; cin>>Q>>N;
    if (Q==1)
    {
        for (int i = 0; i*i <= N; i++){
            if (i*i==N){
                s=1;
            }
        }if(s==1){
                cout<<"YES\n";
            }else{
                cout<<"NO\n";
            }      
    }else{
        for (int i = 0; i*i*i <= N; i++)
        {
            if (i*i*i==N){
                c=1;
            }   
        }if(c==1){
                cout<<"YES\n";
            }else{
                cout<<"NO\n";
            }
    }   
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int _t;cin>>_t;while(_t--)
    solve();
}