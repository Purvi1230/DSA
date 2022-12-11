#include<bits/stdc++.h>
using namespace std;

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int _t;cin>>_t;while(_t--){
        int Q; cin>>Q;
        queue<int> q;
        while(Q--){
        string x; cin>>x;
        if(x=="add"){
            int a; cin>>a;
            q.push(a);
        }else if (x=="remove"){
            if(!q.empty()){
                q.pop();
            } 
        }else{
            if(!q.empty()){
                cout<<q.front()<<'\n';
            }else{
                cout<<"0\n";
            } 
        }
    }
    }
}