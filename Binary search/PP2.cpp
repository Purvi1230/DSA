#include<bits/stdc++.h>
using namespace std;
int n, q;
int check(int x, int arr[]){
    if(x==n-1) return 1;
    if(arr[x]>arr[x+1]){
        return 1;
    }else{
        return 0;
    }
}

void solve(){
    cin>>n>>q; int arr[n];
    int m = 0;
    while(m<n){
        cin>>arr[m];
        m++;
    }
    while(q--){
        int k; cin>>k;//value provided
        int low = 0, high = n-1, ans = n-1;
        while(low<=high){
            int mid = low+(high-low)/2;
            if(check(mid, arr)){
                ans = mid;
                high = mid-1;
            }else{
                low = mid+1;
            }
        }
        if(k>=arr[0] && k<=arr[ans]){
            low = 0; high = ans;
            while(low<=high){
                int mid = low+(high-low)/2;
                if(arr[mid]==k){
                    cout<<mid+1<<" ";
                    break;
                }else if(arr[mid]>k){
                    high = mid-1;
                }else{
                    low = mid+1;
                }
            }
        }
        if(k<=arr[ans+1] && k>=arr[n-1]){
            low = ans+1; high=n-1;
            while(low<=high){
                int mid = low+(high-low)/2;
                if(arr[mid] == k){
                    cout<<mid+1<<" ";
                    break;
                }else if(arr[mid]>k){
                    low = mid+1;
                }else{
                    high = mid-1;
                }
            }
        }cout<<'\n';
    }
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int _t;cin>>_t;while(_t--)
    solve();
}