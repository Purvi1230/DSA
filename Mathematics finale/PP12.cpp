#include <bits/stdc++.h>
using namespace std;
#define int long long

const int mod = 1e9 + 7;
const int nax = 1e3 + 10;
int fact[nax], pow2[nax], a[nax];
int dp[nax][nax];

void initialise_dp() {
    for(int i = 0; i < nax; i++) {
        for(int j = 0; j < nax; j++) {
            dp[i][j] = 1;
        }
    }
    for(int j = 0; j < nax; j++) {
        dp[0][j] = 0;
    }
    dp[0][0] = 1;
    
    for(int i = 0; i < nax; i++) {
        for(int j = 0; j < nax; j++) {
            if(i >= 1 && j >= 1) {
                dp[i][j] = (dp[i-1][j-1] + dp[i-1][j]) % mod;
            }
        }
    }
}

int power(int a, int b) {
    if(b == 0) return 1;
    int res = power(a, b/2);
    res *= res;
    res %= mod;
    if(b & 1) {
        res *= a;
        res %= mod;
    }
    return res;
}

int ncr(int n, int r) {
    if(r > n) {
        return 0;
    }
    return dp[n][r];
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    fact[0] = 1;
    for(int i = 1; i < nax; i++) {
        fact[i] = (i * fact[i-1]) % mod;
    }
    
    pow2[0] = 1;
    for(int i = 1; i < nax; i++) {
        pow2[i] = (2 * pow2[i-1]) % mod;
    }
    
    initialise_dp();
    
    int tt;
    cin >> tt;
    
    while(tt--) {
        int n, x;
        cin >> n;
        
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        sort(a, a + n);
        
        vector<int> next(n);
        next[n-1] = n-1;
        
        for(int i = n-2; i >= 0; i--) {
            if(a[i] == a[i+1]) {
                next[i] = next[i+1];
            } else {
                next[i] = i;
            }
        }
        
        int ans = pow2[n-1];
        
        for(int i = 0; i < n-1; i++) {
            if(a[i] == a[i+1]) {
                for(int s = 1; 2*s <= n; s++) {
                    if((s-1) <= i && s <= (n-i-1)) {
                        int U = ncr(i, s-1);
                        int T = ncr(n-i-1, s);
                        int it = next[i] + 1;
                        T = (T - ncr(n-it, s) + mod*mod) % mod;
                        ans = (ans + (U * T)) % mod;
                    } else {
                        break;
                    }
                }
            }
        }
        
        cout << ans << '\n';
    }
    
    return 0;
}
