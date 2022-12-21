#include <bits/stdc++.h>
using namespace std;
#define int long long


void solve()
{
    int n;
    cin >> n;
    int nD = pow(2,n);
    multiset<int> mt;
    for (int i = 0; i < nD; i++)
    {
        int x;
        cin >> x;
        mt.insert(x);
    }
    mt.erase(0);
    vector<int>  ans;
    vector<int> sum; 
    sum.push_back(0);//to store nos too in sum loop
    while(!mt.empty())
    {
        int it = *mt.begin();
        ans.push_back(it);
        vector<int> temp;
        for (auto jt:sum)
        {
            temp.push_back(it+jt);//store no and its sum
        }
        
        for(int i=0;i<temp.size();i++)
        {
            sum.push_back(temp[i]); // store nos and sums associated with it
            {mt.erase(mt.find(temp[i]));}//deleting no. as well as the sums generated with no.
        }
    }    
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    
    cout << "\n";
}

signed main() {
ios_base::sync_with_stdio(0);
cin.tie(0);cout.tie(0);
int _t;cin >> _t; while(_t--)
solve();
}