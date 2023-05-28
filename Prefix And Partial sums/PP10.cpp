#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl '\n'
const int mod = 1000000007;
typedef vector<ll> vll;

ll n, m;

void print(vector<vll> vec) {
  for (ll i = 1; i <= n; i++) {
    for (ll j = 1; j <= m; j++) {
      cout << vec[i][j] << " ";
    }
    cout << endl;
  }
}

void solve() {
  ll i, j, k, q;
  cin >> n >> m >> q;

  vector<vll> arr(n + 1, vll(m + 1, 0));
  vector<vll> rect(n + 1, vll(m + 1, 0));
  vector<vll> tri(n + 1, vll(m + 1, 0));

  for (i = 1; i <= n; i++) {
    for (j = 1; j <= m; j++) {
      cin >> arr[i][j];
      rect[i][j] =
          (rect[i - 1][j] + rect[i][j - 1] - rect[i - 1][j - 1] + arr[i][j]) %
          mod;
      tri[i][j] = (tri[i - 1][j - 1] + rect[i][j] - rect[i][j - 1]) % mod;
    }
  }

  while (q--) {
    ll x, y, l;
    cin >> x >> y >> l;

    i = max(0ll, x - l);
    j = max(0ll, y - l);

    ll ans = tri[x][y] - tri[i][j] - (rect[i][y] - rect[i][j]);
    ans = (ans % mod + mod) % mod;

    cout << ans << endl;
  }
}

signed main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  // #ifndef ONLINE_JUDGE
  // freopen(“input.txt”, “r”, stdin);
  // freopen(“output.txt”, “w”, stdout);
  // #endif

  int t = 1;
  // cin>>t;

  while (t--) solve();

  return 0;
}