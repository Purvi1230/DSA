#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin>>n;
    map<int, int>customers;
    while (n--){
        int arrival = 0, leaving = 0;
        cin>>arrival>>leaving;
        customers.insert(pair<int,int>(arrival,1));
        customers.insert(pair<int, int>(leaving, -1));
    }
    int present_customers = 0;
    int max_customers = 0;
    for (auto i = customers.begin(); i!= customers.end(); i++)
    {
        present_customers += i->second;
        max_customers = max(max_customers, present_customers);
    }
    cout<<max_customers<<'\n';
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int _t;cin>>_t;while(_t--)
    solve();
}