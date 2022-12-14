#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int N; cin>>N; int a[N];
    map<int, int>m;
    for (int i = 0; i < N; i++){
        cin>>a[i]; m[a[i]]++;
    }
    int x = 1; int count = 0;
    for(int j=0; j<32; j++){
        for(int i=0; i<N; i++){
            m[a[i]]--;
            if(m.count(x-a[i])){
                count += m[x-a[i]];
            }
        }
        for(int i=0; i<N; i++){
            m[a[i]]++;
        }
        x*=2;
    }
    cout<<count<<'\n';
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int _t;cin>>_t;while(_t--)
    solve();
}