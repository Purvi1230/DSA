#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    IOS
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        stack<int> s;
        int l[n], r[n];
        for (int i = 0; i < n; ++i) {
            while(!s.empty() && a[s.top()] >= a[i]) {
                s.pop();
            }
            if(s.empty()) {
                l[i] = -1;
            }
            else {
                l[i] = s.top();
            }
            s.push(i);
        }
        while (!s.empty()) {
            s.pop();
        }
        for (int i = n-1; i >= 0; --i) {
            while(!s.empty() && a[s.top()] >= a[i])
                s.pop();
            if(s.empty()) {
                r[i] = n;
            }
            else {
                r[i] = s.top();
            }
            s.push(i);
        }

        int ans[n] = {};
        for (int i = 0; i < n; ++i) {
            int x = r[i] - l[i] - 2;
            ans[x] = max(ans[x], a[i]);
        }
        for (int i = n-2; i >= 0; --i) {
            ans[i] = max(ans[i], ans[i+1]);
        }
        for (int i = 0; i < n; ++i) {
            cout << ans[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}