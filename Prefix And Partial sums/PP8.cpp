#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;

ll add(ll a, ll b){
    a+=b;
    return ((a)%mod+mod)%mod;
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    ll n, q; cin>>n>>q;
    ll a[n+2] = {};
    ll b[n+2] = {};
    while(q--){
        ll A, d, l, r;
        cin>>A>>d>>l>>r;

        a[l]=add(a[l], add(A, -l*d));
        b[l] = add(b[l], d);
        a[r+1] = add(a[r+1], -add(A, -l*d));
        b[r+1] = add(b[r+1], -d);
    }
    for(int i = 1; i<=n; i++){
        a[i] = add(a[i], a[i-1]);
        b[i] = add(b[i], b[i-1]);
        int ans = a[i];
        ans = add(ans, i*b[i]);

        ans = (ans+mod)%mod;
        cout<<ans<<'\n';
    }
}