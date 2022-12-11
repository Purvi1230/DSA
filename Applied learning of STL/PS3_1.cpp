#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    IOS
    int t;
    cin >> t;
    while (t--) {
        int q;
        cin >> q;
        deque<int> d;
        while (q--) {
            string s;
            cin >> s;
            if(s == "insertback") {
                int x;
                cin >> x;
                d.push_back(x);
            }
            else if(s == "eraseback") {
                if(!d.empty()) {
                    d.pop_back();
                }
            }
            else if(s == "insertfront") {
                int x;
                cin >> x;
                d.push_front(x);
            }
            else if(s == "erasefront") {
                if(!d.empty()) {
                    d.pop_front();
                }
            }
            else if(s == "printfront") {
                if(!d.empty()) {
                    cout << d.front() << "\n";
                }
                else {
                    cout << "0\n";
                }
            }
            else if(s == "printback") {
                if(!d.empty()) {
                    cout << d.back() << "\n";
                }
                else {
                    cout << "0\n";
                }
            }
            else {
                int x;
                cin >> x;
                if(x < (int)d.size()) {
                    cout << d[x] << "\n";
                }
                else {
                    cout << "0\n";
                }
            }
        }
    }
    return 0;
}