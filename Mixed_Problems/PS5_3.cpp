#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n,x; cin>>n>>x; 
    if(n<4){
        cout<<"NO\n";
        return 0;
    }
    int a[n];
    for (int i = 0; i < n; i++){
        cin>>a[i];
    }
     
    map<int, pair<int,int>> m;
    m[a[0] + a[1]] = {0,1};

    for(int i = 2; i<n; i++){
        for (int j= i+1; j < n; j++)
        {
            int cur = a[i] + a[j];
            if (m.find(x-cur)!=m.end())
            {
                cout<<"YES\n";
                return 0;
            }
            
        } 
        for (int j = 0; j < i; j++)
        {
            int cur = a[j]+a[i];
            m[cur]={j,i};
        }
    }
    cout<<"NO\n";
    return 0;
}