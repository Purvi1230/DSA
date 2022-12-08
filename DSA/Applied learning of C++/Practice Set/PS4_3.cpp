#include<bits/stdc++.h>
using namespace std;

void solve(){
    int N; cin>>N;
    int count = 0;
    for (int i = 1; i*i<=N; i++){
        if (N%i==0){
            if (i*i==N){
                count++;
            }else{
                count+=2;
            }    
        } 
    }
    cout<<count<<'\n'; 
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int _t;cin>>_t;while(_t--)
    solve();
}