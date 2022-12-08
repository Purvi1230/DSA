#include<bits/stdc++.h>
using namespace std;

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int n = s.size();
        int Q;
        cin >> Q;
        while (Q--)
        {
            string x;
            cin >> x;
            if (x == "print")
            {
                int a, b;
                cin >> a >> b;
                cout << s.substr(a, b - a + 1) << "\n";
            }
            else if (x == "reverse")
            {
                int l, r;
                cin >> l >> r;
                reverse(s.begin() + l, s.begin() + r + 1);
            }
            else if (x == "replace")
            {
                int l, r;
                string p;
                cin >> l >> r >> p;
                for (int j = l; j <= r; ++j)
                {
                    s[j] = p[j - l];
                }
            }
            else
            { // rotate
                int k;
                cin >> k;
                s = s.substr(n - k, k) + s.substr(0, n - k);
            }
        }
    }
}