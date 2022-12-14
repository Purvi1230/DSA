#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long

signed main() {
    IOS
    int t;
    cin >> t;
    while (t--) {
        int w, h, n;
        cin >> h >> w >> n;
        set<int> hori, verti;
        hori.insert(0);
        hori.insert(h);
        verti.insert(0);
        verti.insert(w);
        multiset<int> w1, h1;
        w1.insert(w);
        h1.insert(h);
        while(n--) {
            char c;
            int x;
            cin >> c >> x;
            if(c == 'H') {
                hori.insert(x);
                auto it = hori.lower_bound(x);
                auto it1 = it, it2 = it;
                it1--; it2++;
                h1.erase(h1.find(*it2 - *it1));
                h1.insert(*it2 - *it);
                h1.insert(*it - *it1);
            }
            else {
                verti.insert(x);
                auto it = verti.lower_bound(x);
                auto it1 = it, it2 = it;
                it1--; it2++;
                w1.erase(w1.find(*it2 - *it1));
                w1.insert(*it2 - *it);
                w1.insert(*it - *it1);
            }
            int ans = (*prev(w1.end())) * (*prev(h1.end()));
            cout << ans << "\n";
        }
    }
    return 0;
}