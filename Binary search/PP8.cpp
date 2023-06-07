#include <bits/stdc++.h>
using namespace std;

#define ll long long int

double a[10010], b[10010];
int n, k;

bool check(double x) {
    double c[n];
    for (int i = 0; i < n; i++)
        c[i] = a[i] - x * b[i];
    sort(c, c + n);
    double temp = 0;
    for (int i = n - 1; i >= n - k; i--)
        temp += c[i];
    return temp >= 0;
}

void solve() {
    cin >> n >> k;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];
    
    double lo = 0, hi = 1e9, ans = -1;
    for (int i = 0; i < 60; i++) {
        double mid = (lo + hi) / (double)2;
        if (check(mid)) {
            ans = mid;
            lo = mid;
        } else {
            hi = mid;
        }
    }
    
    cout << fixed << setprecision(6) << ans << '\n';
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int t;
    cin >> t;
    while (t--)
        solve();
    
    return 0;
}
