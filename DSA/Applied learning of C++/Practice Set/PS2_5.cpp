#include<bits/stdc++.h>
using namespace std;

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    string s;
    getline(cin, s);
    while (t--) {
        getline(cin, s);
        int n = s.size();
        int i = 0, j = n-1;
        bool is_palin = 1;
        while (1) {
            while (i < n && (s[i]<'a' || s[i]>'z'))
                i++;
            while(j >= 0 && (s[j]<'a' || s[j]>'z'))
                j--;
            if(i > j)
                break;
            if(s[i] != s[j])
                is_palin = 0;
            i++; j--;
        }
        if(is_palin) {
            cout << "YES\n";
        }
        else {
            cout << "NO\n";
        }
    }
}