#include<bits/stdc++.h>
using namespace std;
const int mod = 1000007;
using ll = long long;

void solve(ll n, int d) {
    map<ll, ll> factor;

    for (ll i = 2; i * i <= n; i++) {
        ll cnt = 0;
        while (n % i == 0) {
            n /= i;
            cnt++;
        }
        if (cnt)
            factor[i] += (2 * cnt);
    }

    if (n > 1)
        factor[n] += 2;

    factor[2] += (2 * d);
    factor[5] += (2 * d);

    ll ans = 1;
    for (auto it : factor) {
        ans *= (it.second + 1);
        ans %= mod;
    }

    ans += ans; // same as ans *= 2; for negative pairs

    if (ans > mod)
        ans -= mod;

    cout << ans - 1 << "\n"; // as n > 0, ans > 0
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    for (int i = 0; i < 2000; i++) { // at most 2000 lines of input
        ll n;
        int d;
        cin >> n >> d;

        if (n == 0 && d == 0)
            break; // program terminates

        solve(n, d);
    }
}
