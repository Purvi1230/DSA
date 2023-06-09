#include<bits/stdc++.h>
using namespace std;
#define int long long
const int M = 1e9+7;

int binary_exponentiation(int a, int b, int M){
    int ans = 1;
    while(b){
        if(b%2) ans=(ans*a)%M;
        a=(a*a)%M;
        b/=2;
    }
    return ans;
}

void solve(){
    int n, m;
    cin >> n >> m;
    int ans=0;
    int la;
    for(int i=1; i<=n; i=la+1){
        la=(n/(n/i));
        int x=n/i;
        x%=M;
        ans+=binary_exponentiation(x,m,M)*((la-i+1)%M);
        ans%=M;
    }
    cout << ((ans%M)+M)%M << endl;
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}
