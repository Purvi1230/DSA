#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n; cin>>n; int hist[n];
    for(int i = 0; i<n; i++){
        cin>>hist[i];
    }
    stack<int>st;
    st.push(-1);
    int area = hist[0];
    int i =0;
    vector<int> left_smaller(n,-1), right_smaller(n,n);
    while(i<n){
        while(!st.empty() && st.top()!=(-1) && hist[st.top()]>hist[i]){
            right_smaller[st.top()]=i;
            st.pop();
        }
        if(i>0 && hist[i] == hist[i-1]){
            left_smaller[i] = left_smaller[i-1];
        }else{
            left_smaller[i] = st.top();
        }
        st.push(i);
        i++;
    }
    for(int j = 0; j<n; j++){
        area = max(area, hist[j]*(right_smaller[j]-left_smaller[j]-1));
    }
    cout<<area<<'\n';
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int _t;cin>>_t;while(_t--)
    solve();
}