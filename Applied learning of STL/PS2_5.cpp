#include <bits/stdc++.h>
using namespace std;

#define IOS                        \
    ios_base::sync_with_studio(0); \
    cin.tie(0);                    \
    cout.tie(0);

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        stack<int> st1, st2;
        int q1, front = 0;
        cin >> q1;
        while (q1--)
        {
            string s;
            cin >> s;
            if (s == "push")
            {
                int x;
                cin >> x;
                if (st1.empty())
                {
                    front = x;
                }
                st1.push(x);
            }
            else if (s == "pop")
            {
                if (st2.empty())
                {
                    while (!st1.empty())
                    {
                        st2.push(st1.top());
                        st1.pop();
                    }
                }
                int x = st2.top();
                st2.pop();
                cout << x << "\n";
            }
            else
            {
                if (st2.empty())
                {
                    cout << front << "\n";
                }
                else
                {
                    cout << st2.top() << "\n";
                }
            }
        }
    }
    return 0;
}