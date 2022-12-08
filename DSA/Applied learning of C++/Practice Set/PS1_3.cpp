#include<bits/stdc++.h>
using namespace std;

void solve(){
    int M, F, R;
    cin>>M>>F>>R;
    if (M==-1 || F==-1 ||(M+F)<30)
    {
        cout<<"F\n";
    }
    else
    {
        if ((M+F)>=80)
        {
            cout<<"A\n";
        }
        else if ((M+F)>=65 && (M+F)<80)
        {
            cout<<"B\n";
        }
        else if (R>=50 || ((M+F)>=50 && (M+F)<65))
        {
            cout<<"C\n";
        }
        else if ((M+F)>=30 && (M+F)<50)
        {
            cout<<"D\n";
        }
    }
    
    
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int _t;
    cin>>_t;
    while(_t--)
    solve();
    
}