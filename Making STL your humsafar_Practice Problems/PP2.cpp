#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n, k; cin>>n>>k; int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    deque<int> q;
    for(int i = 0; i<k; i++){
        while((!q.empty()) && arr[i]>=arr[q.back()]){
            q.pop_back();
        }
        q.push_back(i);
    }
    for(int i = k; i<n; i++){
        cout<<arr[q.front()]<<" ";
        while((!q.empty()) && q.front()<=(i-k)){
            q.pop_front();
        }
        while(!q.empty() && arr[i]>=arr[q.back()]){
            q.pop_back();
        }
        q.push_back(i);
        
    }
    cout<<arr[q.front()]<<'\n';
}   

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int _t;cin>>_t;while(_t--)
    solve();
}