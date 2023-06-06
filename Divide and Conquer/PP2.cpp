#include<bits/stdc++.h>
using namespace std;
#define int long long
#define pii pair<int, int>
#define vi vector<int>
#define vii vector<pii>
#define all(v) (v).begin(), (v).end()

int n; int a[100005];
int ans = 0;
void ms(int l, int r){
    if(l>=r) return;
    int m = (l+r)/2;
    ms(l,m);
    ms(m+1,r);
    int i = l, j = m+1, k = 0;
    int temp[r-l+1];
    while(i<=m && j<=r){
        if(a[i]<=a[j]){
            temp[k++] = a[i++];
        }else{
            temp[k++] = a[j++];
            ans+=m-i+1;
        }
    }while(i<=m) temp[k++]=a[i++];
    while(j<=r) temp[k++] = a[j++];
    for(int i = l; i<=r; i++){
        a[i] = temp[i-l];
    }
}
void solve(){
    cin>>n; 
    for(int i = 0; i<n; i++) cin>>a[i];
    ms(0, n-1);
    cout<<ans<<'\n';
    ans = 0;
}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(); cout.tie(0);
    int t = 1; cin>>t;
    for(int i = 0; i<t; i++) solve();
}