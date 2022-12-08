#include<bits/stdc++.h>
using namespace std;

#define int long long

void solve(){
    string s;
    int A, B; cin>>s>>A>>B;
    //Base A to decimal
    int deci = 0; int pw = 1;
    for (int i = (int)s.size()-1; i >= 0; i--)
    {
        int x;
        if (s[i]>='0' && s[i]<='9')
        {
            x = s[i]-'0';
        }else{
            x = s[i]-'A'+10;
        }
        deci +=x*pw;
        pw *= A;
    }
    //decimal to Base B
    string ans;
    while (deci)
    {
        int x = deci%B;
        char c;
        if (x >= 0 && x <= 9)
        {
            c = x + '0';
        }else{
            c = x - 10 + 'A';
        }
        ans +=c;
        deci /= B;
    }
    reverse(ans.begin(), ans.end());
    cout<<ans<<'\n';
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int _t;cin>>_t;while(_t--)
    solve();
}