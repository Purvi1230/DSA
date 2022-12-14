#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin>>n;
    int a[n], b[n];
    for (int i = 0; i < n; i++){
        cin>>a[i];
    }
    for (int i = 0; i < n; i++){
        cin>>b[i];
    }
    map<pair<int,int>, int> m; int count = 0;
    for (int i = 0; i < n; i++){
        if (a[i]==0){
            if(b[i]==0){
                count++;
            }
        }else{
            bool f = 0;
            if((a[i]<0 && b[i]>0) || (a[i]>0 &&b[i]<0)){
                f = 1;
            }
            a[i] = abs(a[i]);
            b[i] = abs(b[i]);
            int g = __gcd(a[i], b[i]);
            a[i]/=g;
            b[i]/=g;
            if(f) a[i]=-a[i];
            m[{a[i],b[i]}]++;
        }
    }
    int maxi = 0;
    for(auto it : m){
        maxi = max(it.second, maxi);
    }
    cout<<maxi+count <<'\n'; // Number of zeroes in array c
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int _t;cin>>_t;while(_t--)
    solve();
}