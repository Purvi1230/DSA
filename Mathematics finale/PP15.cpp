#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define LD long double

const int N = 100010;
int inf = 1e9;
int mod = 1e9 + 7;

ll cal(ll n) {
    ll x = n, y = n + 1;
    if (x % 2 == 0) x /= 2;
    else y /= 2;
    x %= mod;
    y %= mod;
    ll ans = x * y % mod;
    if (ans < 0) ans += mod;
    return ans;
}

ll get(ll n, ll m) {
    ll t = (n + 1) / m;
    t %= mod;
    ll ans = cal(m - 1) * t % mod;
    n %= m;
    if (n < 0) n += m;
    if (n < m - 1) ans += cal(n);
    ans %= mod;
    if (ans < 0) ans += mod;
    return ans;
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int T = 1;
    cin >> T;
    assert(T > 0 && T <= 100000);

    while (T--) {
        ll L, R, M;
        cin >> L >> R >> M;
        assert(L > 0 && R > 0 && L <= R && M > 0 && M <= 1e18);

        ll ans = get(R, M) - get(L - 1, M);
        ans %= mod;
        if (ans < 0) ans += mod;

        cout << ans << "\n";
    }

    return 0;
}
