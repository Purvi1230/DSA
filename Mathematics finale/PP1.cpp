#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    ll n; cin>>n;
    assert(n>0 && n<=1000000000000);
    set<ll> F;
    for(ll i = 1; i*i<=n; i++){
        if(n%i==0){
            F.insert(i);
            F.insert(n/i);
        }
    }for(ll u : F){
        cout<<u<<" ";
    }cout<<'\n';
}