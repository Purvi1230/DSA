#include <bits/stdc++.h>
#define N 100010
#define ll long long int
#define LD long double

using namespace std;

int mod = 1000000007;

char get(char c1, char e, char c2, int val) {
    int m1, m2;
    if(c1 == 'x') m1 = val;
    else if(c1 == 'X') m1 = 1 - val;
    else m1 = c1 - '0';
    if(c2 == 'x') m2 = val;
    else if(c2 == 'X') m2 = 1 - val;
    else m2 = c2 - '0';
    if(e == '&') {
        return ('0' + (m1 & m2));
    }
    if(e == '|') {
        return ('0' + (m1 | m2));
    }
    return ('0' + (m1 ^ m2));
}

int eval(string E, int val) {
    stack < char > s;
    for(int i = 0; i < (int)E.length(); i++) {
        if(E[i] == '(') {
            continue;
        }
        if(E[i] == ')') {
            char c2 = s.top();
            s.pop();
            char e = s.top();
            s.pop();
            char c1 = s.top();
            s.pop();
            s.push(get(c1, e, c2, val));
        }
        else {
            if(E[i] == 'x') s.push('0' + val);
            else if(E[i] == 'X') s.push('0' + 1 - val);
            else s.push(E[i]);
        }
    }
    return (s.top() - '0');
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int T;
    cin >> T;
    for(int t = 1; t <= T; t++) {
        string E;
        cin >> E;
        assert((int)E.length() <= 300);
        int x = eval(E, 0);
        int y = eval(E, 1);
        if(x == y) {
            cout << "0\n";
        }
        else {
            cout << "1\n";
        }
    }
    return 0;
}