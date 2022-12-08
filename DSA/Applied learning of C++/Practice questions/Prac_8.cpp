#include<bits/stdc++.h>
using namespace std;

void solve(){
    long double x, y;
    cin>>x, y;
    if(x==0&&y==0){
        cout<<"origin"<<endl;
    }
    else if (x==0)
    {
        cout<<"X-AXIS"<<endl;
    }
    else if (y==0)
    {
        cout<<"Y-AXIS"<<endl;
    }
    else if (x>0)
    {
        if (y>0)
        {
            cout<<"01"<<endl;
        }
        else{
            cout<<"04"<<endl;
        }
    }
    else if (x<0)
    {
        if (y>0)
        {
            cout<<"02"<<endl;
        }
        else{
            cout<<"03"<<endl;
        }
    }
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    //int_t;cin>>_t;while(_t--)
    solve();
}