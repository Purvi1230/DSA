#include<bits/stdc++.h>
using namespace std;

struct prev_next_unblocked{
    set<int> s, ns, pns;
    void insert(int x){
        s.insert(x);
        ns.erase(x);
        pns.erase(x);
        if (s.find(x+1)==s.end())
        {
            ns.insert(x+1);
        }
        if(s.find(x-1)==s.end()){
            pns.insert(x-1);
        }
    }
    int getnext(int y){
        if (s.find(y)!=s.end())
        {
            return y;
        }else
        {
            return *ns.lower_bound(y);
        }    
    }
    int getprev(int y){
       if (s.find(y)!=s.end())
        {
            return y;
        }else
        {
            auto it = pns.lower_bound(y);
            it--;
            return *it;
        }  
    }
};


signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int _t;cin>>_t;while(_t--)
    prev_next_unblocked();
}