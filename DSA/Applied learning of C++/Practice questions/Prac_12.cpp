#include<bits/stdc++.h>
using namespace std;

/*
5
*****
*...*
*.*.*
*...*
*****

3
***
*.*
***

7
*******
*.....*
*.***.*
*.*.*.*
*.***.*
*.....*
*******
*/

using ld = long double;

void print_cell(int i, int j, int n){
    // centre in case of a concentric - n/2, n/2
    int decide = max(abs(i-n/2), abs(j-n/2));
    // char ch1 = '*';
    // char ch2 = '.';
    // if(n%4==3){
    //     swap(ch1,ch2);
    // }
    if((decide+n/2)%2==0){
        cout<<"*";
    }else{
        cout<<".";
    }
}

void print_row(int i, int n){
    for(int j=0; j<n;j++){
        print_cell(i,j,n);
    }
}

void solve(){
    int n;
    cin>>n;
    for(int i=0; i<n; i++){ 
        print_row(i,n);
        cout<<endl;
    }
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    //int_t;cin>>_t;while(_t--)
    solve();
}