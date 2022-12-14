#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int _t;cin>>_t;while(_t--){
        int n, k; cin>>n>>k;
        int a[n]; map<int, int>m;
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
            m[a[i]]++;
        }
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            m[a[i]]--;
            count += m[a[i]-k];
            count += m[a[i]+k];
        }
        cout<<count<<'\n';
    }
}