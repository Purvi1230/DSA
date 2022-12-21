#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,N,prev=0;
        cin>>n;
        long long int a;
        vector<long long int> A(n+1,0);
        N=pow(2,n);
        multiset<long long int> st;
        for(int i=0;i<N;i++){
            cin>>a;
            st.insert(a);
        }
        vector<long long int> temp(1,0);
        for(int i=0;i<n;i++){
            for(int j=prev;j<temp.size();j++) st.erase(st.find(temp[j]));
            A[i+1]=*st.begin();
            prev=temp.size();
        	for(int j=temp.size()-1;j>=0;j--){
                temp.push_back(temp[j]+A[i+1]);
            }
        }
        for(int i=0;i<n;i++) cout<<A[i+1]<<" ";
        cout<<endl;
    }
    return 0;
}