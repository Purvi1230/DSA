#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
const int N = 10000001;
int arr[N];

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n, q; cin>>n>>q;
    for(int i = 1; i<=n; i++)
        cin>>arr[i];
    ll prefixSum[n+1]; prefixSum[0] = 0;
    for (int i = 1; i <= n; i++){
        prefixSum[i] = prefixSum[i-1]+arr[i];
        if(prefixSum[i]<0)
            prefixSum[i]+=mod;     
        if(prefixSum[i]>=mod)
            prefixSum[i]-=mod;
    }
    while(q--){
        ll l,r; cin>>l>>r;
        ll ans = prefixSum[r]-prefixSum[l-1];
        if(ans<0)
            ans+=mod;     
        if(ans>=mod)
            ans-=mod;
        cout<<ans<<'\n';
    }
}