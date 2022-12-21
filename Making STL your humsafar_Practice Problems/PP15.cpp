#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;cin>>n;
    vector<int> a(n), b(n);
    for(int i=0; i<n;i++) cin>>a[i];
    for(int i=0; i<n;i++) cin>>b[i];
    pair<int,int> p[n];
    for(int i=0; i <n; i++){
        p[i].first = a[i] + b[i];
        p[i].second = i;
    }
    sort(p,p+n);
    int A = 0, B = 0;
    for(int i = n-1, j=0; i >= 0; i--, j ^= 1){
        if(!j) {
            A += a[p[i].second];
        }else {
            B += b[p[i].second];
        }
    }
    
    if(A > B) {
        cout<<"Alice\n";
    }else if(A == B){
        cout<<"Tie\n";
    }else{
        cout<<"Bob\n";
    }
}

signed main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;cin>>t;
    while(t--)
    	solve();
}