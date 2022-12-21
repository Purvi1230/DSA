#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isCircular(string instructions) {
        int size = instructions.size();
        if (size == 0) return true;
        pair<int,int> pos = {0,0};
        int d = 0; // current direction;
        for (int i = 0; i < size; ++i) {
          if (instructions[i] == 'L') d = (d+1)%4;//change direction
          else if (instructions[i] == 'R') d = (d+3)%4;// change direction
          else {// transport 
      if (d == 0) pos.second++;
      else if (d == 1) pos.first--;
      else if (d == 2) pos.second--;
      else if (d == 3) pos.first++;
          }
        }
        // check position and direction;
        if (d!=0) return true;
        if (d == 0 && pos.first==0 && pos.second == 0) return true; 
        return false;
    }
};

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int _t; cin>>_t; while(_t--){
        int n; cin>>n; string s;
        cin>>s;
        Solution sol;
        if(sol.isCircular(s) == 1){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }
}