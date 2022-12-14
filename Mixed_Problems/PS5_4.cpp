#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main(){
    IOS
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin>>s;
        int n = s.size();
        int c[26] = {};
        for (int i = 0; i < n; ++i) {
            c[s[i]-'a']++;
        }
        int cur = 0, i = 0;
        stack<int> t;
        string u;
        while(cur < 26) {
            while(!t.empty() && t.top() <= cur +'a'){
                u+=t.top();
                t.pop();
            }
            if(!c[cur])
                cur++;
            else{
                while(c[cur]) {
                    if(s[i]-'a'==cur){
                        u+=s[i];
                    }
                    else{
                        t.push(s[i]);
                    }
                    c[s[i]-'a']--;
                    i++;
                }
            }
        }
        while(!t.empty()){
            u+=t.top();
            t.pop();
        }
        cout << u << "\n";
    }
    return 0;
}  
    
