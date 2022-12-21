#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    IOS
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int freq[100001] = {};
        int b = 0, cnt = 0;
        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            freq[x]++;
            if(x > b) {
                cnt++;
            }
            if(cnt > b) {
                b++;
                cnt -= freq[b];
            }
            cout << b << " ";
        }
        cout << "\n";
    }
    return 0;
}