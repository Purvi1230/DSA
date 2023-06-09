#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll arr[100001];

void solve() {
    ll n, a, b, ans = 1;
    cin >> n >> a >> b;

    for (ll i = 1; i <= n; i++) {
        arr[i] = (i * a) / b;
    }

    for (ll i = 1; i <= n; i++) {
        for (ll j = 2 * i; j <= n; j += i) {
            arr[j] -= arr[i];
        }
        ans += arr[i];
    }

    cout << ans << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
