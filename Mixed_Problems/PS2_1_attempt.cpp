#include<bits/stdc++.h>
using namespace std;
#define int long long

const int mod = 1e9+7;

int max_diff(vector<int>v, int length){
    sort(v.begin(), v.end());
    int maxDiff = v[0];
    for (int i = 1; i <v.size(); i++)
    {
        maxDiff = max(maxDiff, v[i]-v[i-1]);
    }
    maxDiff = max(maxDiff, length - v.back());
    return maxDiff;
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int _t;cin>>_t;while(_t--){
        int h, w, n; cin>>h>>w>>n;
        vector<int>v1,v2;
        while(n--){
            char c; cin>>c;
            int a; cin>>a;
            if (c == 'H')
            {
                v1.push_back(a);
            }else{
                v2.push_back(a);
            }
        }
        cout<<(max_diff(v1,h)*max_diff(v2,w))<<'\n';
    }
}