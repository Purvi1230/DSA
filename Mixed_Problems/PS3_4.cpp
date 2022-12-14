#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve(){
    string str;
    cin>>str;
    int x=0, y=0;
    int ans=0;
    set<pair<pair<int,int>, pair<int,int>>> s;
    for(int i=0;i<str.size();i++){
        pair<int,int> init = {x,y};
        pair<int,int> fin;
        pair<pair<int,int>, pair<int,int>> one;
        pair<pair<int,int>, pair<int,int>> two;
        if(str[i]=='N'){
            fin = {x,y+1};
        }
        else if(str[i]=='S'){
            fin = {x,y-1};
        }
        else if(str[i]=='E'){
            fin = {x+1,y};
        }
        else{
            fin = {x-1,y};
        }
        one = {init,fin};
        two = {fin,init};
        if(s.find(one)!=s.end()){
            ans+=1;
        }
        else{
            ans+=5;
            s.insert(one);
            s.insert(two);
        }
        x = fin.first;
        y = fin.second;
    }
    cout<<ans<<"\n";
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin>>t; while(t--)
        solve();

    return 0;
}