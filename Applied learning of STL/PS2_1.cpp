#include<bits/stdc++.h>
using namespace std;

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int _t;cin>>_t;while(_t--){
        int q; cin>>q;
        stack<int> st;
        while(q--){
        string x; cin>>x;
        if(x=="add"){
            int a; cin>>a;
            st.push(a);
        }else if (x=="remove"){
            if(!st.empty()){
                st.pop();
            } 
        }else{
            if(!st.empty()){
                cout<<st.top()<<'\n';
            }else{
                cout<<"0\n";
            } 
        }
    }
    }
}