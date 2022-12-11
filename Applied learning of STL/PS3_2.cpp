#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n, k; cin>>n>>k;
    int arr[n];
    // deque<int>a;
    // for (int i = 0; i < n; i++)
    // {
    //     int x; cin>>x;
    //     a.push_back(x);
    // }    
    // for (int i = 0; i < a.size()+k; i++){
    //     if(a.size()>k && !a.empty()){
    //         int max = *max_element(a.begin(), a.begin()+k);
    //         cout<<max<<" ";
    //         a.pop_front();
    //     }else if (a.empty()){
    //         cout<<" ";
    //     }
    //     else{
    //         int max = *max_element(a.begin(), a.begin()+k);
    //         cout<<max<<" ";
    //         break;
    //     }
    // }
    // cout<<'\n';
    for (int i = 0; i < n; i++){
        cin>>arr[i];
    }
    deque<int>d;
    int i = 0, j = 0, window = k-1, ans[n-k+1];
    while(j-i <= window && j<n){
        while(!d.empty()&& d.back()<arr[j]){
            d.pop_back();
        }
        d.push_back(arr[j]);
        if(j-i == window){
            ans[i]=d.front();
            if(d.front()==arr[i]) d.pop_front();
            i++;
        }
        j++;
    }
    for(auto ele : ans){
        cout<<ele<<" ";
    }
    cout<<'\n';
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int _t;cin>>_t;while(_t--)
    solve();
}