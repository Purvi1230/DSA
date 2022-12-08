#include<bits/stdc++.h>
using namespace std;

using ld = long double;

void print_cell(int i, int j, int n){
    char ch1 = 'a'+j;
    char ch2 = ' ';
    if(i==j%8 || i+j%8==8){
        cout<<ch1;
    }else{
        cout<<ch2;
    }
    
}

void print_row(int i, int n){
    for(int j=0; j<26;j++){
        print_cell(i,j,n);
    }
}

void solve(){
    int n;
    for(int i=0; i<5; i++){ 
        print_row(i,n);
        cout<<endl;
    }
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    //int_t;cin>>_t;while(_t--)
    int t=1;
    for(int i=0; i<t; i++){
       solve(); 
    }
}