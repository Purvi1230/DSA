#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n; cin>>n; int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    } 
    int CL[n] = {0}, CR[n] = {0};
    stack<int> q;
    for(int i = 0; i<n; i++){
        while(q.size()!=0 && arr[q.top()]>=arr[i]){
            CL[i]+=(CL[q.top()]+1);
            q.pop();
        }
        q.push(i);
    }
    while(q.size()!=0){
        q.pop();
    }
    for(int i = n-1; i>=0; i--){
        while(q.size()!=0 && arr[q.top()]>arr[i]){
            CR[i]+=(CR[q.top()]+1);
            q.pop();
        }
        q.push(i);
    }
    while(q.size()!=0){
        q.pop();
    }
    int ans = 0;
    for(int i = 0; i<n; i++){
        ans += ((CL[i]+1)*(CR[i]+1)*arr[i]);
    }
    cout<<ans<<'\n';
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int _t;cin>>_t;while(_t--)
    solve();
}