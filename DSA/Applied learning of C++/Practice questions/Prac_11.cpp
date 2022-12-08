#include<bits/stdc++.h>
using namespace std;

using ld = long double;

void print_row(int i){
    for(int j=0; j<=i; j++){
        cout<<"*";
    }
}

void solve(){
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout<<"*";//prints for every row
        }
        cout<<endl;
    }
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    //int_t;cin>>_t;while(_t--)
    solve();
}