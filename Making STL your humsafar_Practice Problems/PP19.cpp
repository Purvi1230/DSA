#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n; cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int left[n], right[n];
    int water = 0;
    left[0] = arr[0];
    for(int i = 1; i<n; i++)
        left[i] = max(left[i-1], arr[i]);
    right[n-1] = arr[n-1];
    for(int i = n-2; i>=0; i--){
        right[i] = max(right[i+1], arr[i]);
    }
    for(int i = 1; i<(n-1); i++){
        int var = min(left[i-1], right[i+1]);
        if(var>arr[i]){
            water+=(var-arr[i]);
        }
    }
    cout<<water<<'\n';
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int _t;cin>>_t;while(_t--)
    solve();
}