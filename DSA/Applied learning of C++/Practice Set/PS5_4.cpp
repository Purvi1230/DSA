#include<bits/stdc++.h>
using namespace std;

void solve(){
    int N; cin>>N; int A[N];
    for (int i = 0; i < N; i++){
        cin>>A[i];
    }
    int cur = 2, diff = A[1]-A[0];
    int ans = 2;
    for (int i = 2; i < N; i++){
        if (A[i]-A[i-1]==diff){
            cur++;
        }else{
            cur = 2;
            diff = A[i]-A[i-1];
        } 
        ans = max(ans, cur);
    }
    cout<< ans<<'\n';
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int _t;cin>>_t;while(_t--)
    solve();
}