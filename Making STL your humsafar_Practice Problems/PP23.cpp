#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double

int inf = 1e9;
int mod = 1e9+7;

inline void add(int &a, int b){
    a = a+b; 
    if(a<0) a+=mod;
}
inline void sub(int &a, int b){
    a = a-b;
    if(a<0) a+=mod;
}
inline int mul(int a, int b){
    return (int)((ll)a * b %mod);
}
inline int inv(int a){
    a %= mod;
    if(a,0) a+=mod;
    int b = mod, u = 0, v= 1;
    while(a){
        int t = b/a;
        b -= t*a; swap(a,b);
        u -= t*v; swap(u,v);
    }
    assert(b==1);
    if(u<0) u+=mod;
    return u;
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int _t;cin>>_t;while(_t--){
        int n; cin>>n;
        int ans = mul(n, n-3);
        ans = mul(ans, inv(2));
        cout<<ans<<'\n';
    }
    return 0;
}