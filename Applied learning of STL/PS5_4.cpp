#include<bits/stdc++.h>
using namespace std;

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int N; cin>>N; vector<int>v;
    for (int i = 1; i <= N; i++)
    {
        v.push_back(i);
    }
    do{
        for (int i = 0; i < v.size(); i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<'\n';
    }while((next_permutation(v.begin(),v.end())));
}