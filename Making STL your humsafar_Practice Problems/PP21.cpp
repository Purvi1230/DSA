#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define LD long double

const int N = 100010;

int inf = 1e9;
int mod = 1e9 + 7;

signed main()
{
    //freopen("IN", "r", stdin);
    //freopen("OUT", "w", stdout);

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int T; cin >> T;
    while(T--) {
        int n; cin >> n;
        int g = 0;
        for(int i = 0; i < n; i++) {
            int x; cin >> x;
            g = __gcd(g, x);
        }
        if(g > 1) cout << "Yes\n";
        else cout << "No\n";
    }
    return 0;
}