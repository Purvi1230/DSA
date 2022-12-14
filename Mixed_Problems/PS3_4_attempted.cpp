#include<bits/stdc++.h>
using namespace std;

void solve(){
    string s; cin>>s;
    vector<pair<int, int>> segments;
    set<vector<pair<int,int>>> sett;
    int x = 0, y = 0;
    int count = 0;
    for (int i = 0; i < s.size(); i++)
    {
        int dx = x; int dy = y;
        if(s[i] == 'N'){
            dy++;
        }else if(s[i] == 'S'){
            dy--;
        }else if(s[i] == 'E'){
            dx++;
        }else{
            dx--;
        }
        segments.clear();
        segments.push_back(make_pair(x,y));
        segments.push_back(make_pair(dx, dy));
        sort(segments.begin(), segments.end());
        if (sett.find(segments) != sett.end())
        {
            count++;
        }else{
            sett.insert(segments);
            count+=5;
        }
        x = dx;
        y = dy;
    }
    cout<<count<<'\n';
    
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int _t;cin>>_t;while(_t--)
    solve();
}