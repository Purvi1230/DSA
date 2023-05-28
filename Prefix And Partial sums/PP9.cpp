#include<bits/stdc++.h>
using namespace std;
#define int long long
const int mod=1e9+7;
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n,q,k;
    cin>>n>>q>>k;
    int arr[n+2]={0};
    int K[n+2];
    K[0]=1;
    for(int i=1;i<n+2;i++)
    {
        K[i]=(K[i-1]*k)%mod;
    }
    int A,L,R;
    while(q--)
    {
        cin>>A>>L>>R;
        int p=k;
        arr[L]=(arr[L]+A)%mod;
        arr[R+1]=(arr[R+1]-A*K[R+1-L])%mod;
        if(arr[R+1]<0)
        {
            arr[R+1]+=mod;
        }
    }
    for(int i=1;i<=n;i++)
    {
        arr[i]=(arr[i]+arr[i-1]*k)%mod;
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i+1]<<" ";
    }
}