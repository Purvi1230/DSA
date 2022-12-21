#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    IOS
    int t;
    cin >> t;
    vector<int> moves[4] = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
    while(t--) {
        int n; cin >> n;
        string s;
        cin >> s;
        int x = 0, y = 0, dir = 0;
        for(char i : s) {
            if(i == 'L') {
                dir = (dir - 1 + 4) % 4;
            }
            else if(i == 'R') {
                dir = (dir + 1) % 4;
            }
            else{
                x += moves[dir][0];
                y += moves[dir][1];
            }
        }
        if(x==0 && y==0) cout << "YES\n";
        else if(dir != 0) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}