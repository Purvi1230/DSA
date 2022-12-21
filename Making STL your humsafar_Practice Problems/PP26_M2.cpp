#include<bits/stdc++.h>
using namespace std;
#define endl '\n' 

void solve()
{
    int num, dem;
    string s,t;
    cin >> num >> dem;

    int a = abs(num);
    int b = abs(dem);
    int temp = a/b;
    if (temp==0)
    {
        t.push_back(char(48));
    }
    
    while (temp)
    {
        t.push_back(char(temp%10 + 48));
        temp/=10;
    }

    while (!t.empty())
    {
        s.push_back(*t.rbegin());
        t.pop_back();
    }
    
    int rem = a%b;
    if (rem==0)
    {
        int i = 0;
    }
    else
    {
        vector<int> v;
        s.push_back('.');
        int flag = 1;
        while (rem!=0 && flag)
        {
            v.push_back(rem);
            s.push_back(char((rem*10)/b + 48));
            rem = (rem*10)%b;
            for (int i = 0; i < v.size(); i++)
            {
                if (rem==v[v.size() - 1 -i])
                {
                    s.insert(s.size() - i -1, "(");
                    s.push_back(')');
                    flag = 0;
                    break;
                }
            }
        }
    }
    
    if (num * dem >= 0)
    {
        cout << s << endl;
    }
    else
    {
        cout << '-' << s << endl;
    }
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t=1;cin >> t;
    while(t--){
        solve();
    }
    return 0;
}