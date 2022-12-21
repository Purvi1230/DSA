#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int N, K;
    cin>>N>>K;
    vector<int> arr(N);
    for(int i = 0; i<N; i++) cin>>arr[i];
    int answer = 0;
    if(K>=N){
        answer = (N*(N-1))/2;
        cout<<answer<<'\n';
        return;
    }
    map<int,int>frequency;
    for(int i = 0; i<N; i++){
        frequency[arr[i]]+=1;
    }
    int ans = (N*(N-1))/2;
    for(auto i : frequency){
        int val = i.second;
        ans -= (val*(val-1))/2;
    }
    multiset <int> st;
    for(auto it: frequency){
        if(it.second>1){
            st.insert(it.second);
        }
    }
    while(st.size()>0 && K>0){
        auto v= st.end();
        v--; int val = *v;
        st.erase(v);
        if(val>1){
            K--;
            val--;
            ans += val;
        }
        if(val>1){
            st.insert(val);
        }
    }cout<<ans<<'\n';
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int t; cin>>t; while(t--)
    solve();
}