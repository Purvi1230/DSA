#include<bits/stdc++.h>
using namespace std;

void solve(){
    int N;
    cin>>N;
    int A[N], B[N-1], C[N-2];
    for (int i = 0; i < N; i++)
    {
        cin>>A[i];
    }
    for (int i = 0; i < (N-1); i++)
    {
        cin>>B[i];
    }
    for (int i = 0; i < (N-2); i++)
    {
        cin>>C[i];
    }
    int sum=0; int sum2=0; int sum3=0;
    for (int i = 0; i < N; i++)
    {
        sum+=A[i];
    }
    for (int i = 0; i < (N-1); i++)
    {
        sum2 +=B[i];
    }
    for (int i = 0; i < (N-2); i++)
    {
        sum3 +=C[i];
    }
    cout<<sum-sum2<<" "<<sum2-sum3<<'\n';
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int _t;cin>>_t;while(_t--)
    solve();
}