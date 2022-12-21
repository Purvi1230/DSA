#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n; cin>>n; int hist[n];
    for(int i = 0; i<n; i++){
        cin>>hist[i];
    }
    stack<int>st;
    int max_area = 0;
    int tp; int area_with_top; int i =0;
    while(i<n){
        if(st.empty() || hist[st.top()]<=hist[i]){
            st.push(i++);
        }else{
            tp = st.top();
            st.pop();
            area_with_top = hist[tp]*(st.empty() ? i : i-st.top() -1);

            if(max_area<area_with_top){
                max_area = area_with_top;
            }
        }
    }
    while(st.empty() == false){
        tp = st.top();
        st.pop();
        area_with_top = hist[tp]*(st.empty() ? i : i-st.top() -1);
        if(max_area<area_with_top){
                max_area = area_with_top;
        }
    }
    cout<<max_area<<'\n';
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int _t;cin>>_t;while(_t--)
    solve();
}