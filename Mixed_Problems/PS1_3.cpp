#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n; cin>>n;
    int a[n]; 
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int l = 0; int count = 0;
    map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        while(m[a[i]]==1){
            cout<<m[a[i]]<<" "<<i<<"\n";
            cout<<m[a[l]]<<"  "<<l<<"\n";
            m[a[l]]--;
            l++;
        }
        m[a[i]]++;
        count = max(count, i-l+1);
    }
    cout<<count<<'\n';
    
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int _t;cin>>_t;while(_t--)
    solve();
}