#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n; cin>>n;
    priority_queue<int, vector<int>, greater<int>> q;
    for (int i = 0; i < n; i++)
    {
        int x; cin>>x;
        q.push(x);
    }
    int sum = 0;
    while(q.size()>1){
        int x = q.top();
        q.pop();
        int y = q.top();
        q.pop();
        sum +=x+y;
        q.push(x+y);
    }
    cout<<sum<<'\n';
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int _t;cin>>_t;while(_t--)
    solve();
}