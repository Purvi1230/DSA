#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define LD long double

const int N=10010;

int inf = 1e9;
int mod = 1e9 + 7;

void solve(){
    int Q; cin>>Q;
    vector<int> v;
    while(Q--){
        string x; cin>>x;
        if(x=="add"){
            int a; cin>>a;
            v.push_back(a);
        }else if (x=="remove"){
            if(!v.empty()) v.pop_back();
        }else if (x=="print"){
            int c; cin>>c;
            // if(v.empty()==true){
            //     cout<<"0\n";
            // }else{
            //     cout<<v[c]<<'\n';
            // }
            if(c < (int)v.size())cout<<v[c]<<'\n';
            else cout<<"0\n";
        }else if (x=="clear"){
            v.clear();
        }
    }
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int _t; cin>>_t; while(_t--)
    solve();
}