#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    //we need to used sets but we will only be able to take unique values so we take multiset.
    int n, k;
    cin>>n>>k;
    multiset<long long> bags;
    //nlog(n) loop
    for (int i = 0; i < n; i++)
    {
        int candy_ct;
        cin>>candy_ct;
        bags.insert(candy_ct);
    }
    long long total_candies =0;
    //klog(n) loop
    for (int i = 0; i < k; i++)
    {
        auto last_it = (--bags.end());
        //last_it--;
        int cand_ct = *last_it;
        total_candies += cand_ct;
        bags.erase(last_it);
        bags.insert(cand_ct/2);
    }
    cout<<total_candies<<'\n';
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int _t;cin>>_t;while(_t--)
    solve();
}