#include<bits/stdc++.h>
using namespace std;

void solve(){
    int N; cin>>N;
    map<string, int>m;
    for (int i = 0; i < N; i++)
    {
        string x; cin>>x;
        m[x]++;
        if(m[x]==1){
            cout<<"OK\n";
        }else{
            cout<<x<<(m[x]-1)<<'\n';
        }
    }
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int _t;cin>>_t;while(_t--)
    solve();
}