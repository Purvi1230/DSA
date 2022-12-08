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
        int n = s.length();
        for (int i = 0; i < n; i++)
        {
            if (int(s[i])>=97 && int(s[i]<=122))
            {
                s[i]=s[i]-32;
            } else if (int(s[i])>=65 && int(s[i]<=90))
            {
                s[i]=s[i]+32;
            }
        }
        cout<<s<<'\n';
    }
}