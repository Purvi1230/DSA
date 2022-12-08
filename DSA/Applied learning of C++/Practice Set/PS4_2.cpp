#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int N; cin>>N;
    int prime = 0;
    for (int i = 2; i*i <=N; i++){
        if (N%i==0){
            prime = 1;
            break;
        } 
    }
    if (N==1 || prime == 1){
        cout<<"NO\n";
    }else{
        cout<<"YES\n";
    }  
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int _t;cin>>_t;while(_t--)
    solve();
}