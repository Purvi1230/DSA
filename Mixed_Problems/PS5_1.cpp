#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define LD long double

const int N = 100010;

int inf = 1e9;

inline int mul(int a, int b, int mod) {
  return (int) ((long long) a * b % mod);
}

inline int power(int a, long long b, int mod) {
  int res = 1;
  while (b > 0) {
    if (b & 1) {
      res = mul(res, a, mod);
    }
    a = mul(a, a, mod);
    b >>= 1;
  }
  return res;
}



signed main()
{
    //freopen("IN", "r", stdin);
    //freopen("OUT", "w", stdout);

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int _;
    cin >> _;

    while (_--) {
        int a, b, c, p;
        cin >> a >> b >> c >> p;

        if (b == 0 && c != 0) {
            cout << "1\n";
        }
        else if (!a) {
            cout << "0\n";
        }
        else if (a % p == 0) {
            cout << "0\n";
        }
        else {
            int y = power(b, c, p - 1);
            cout << power(a, y, p) << "\n";
        }
    }
    return 0;
}