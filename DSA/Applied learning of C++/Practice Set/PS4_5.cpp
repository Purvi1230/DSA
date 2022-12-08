#include<bits/stdc++.h>
using namespace std;

void solve(){
   int N, M, P; cin>>N>>M>>P; 
   int a[N][M], b[M][P];
   for (int i = 0; i < N; i++){
    for (int j = 0; j < M; j++){
        cin>>a[i][j];
    }
   }
   for (int i = 0; i < M; i++){
    for (int j = 0; j < P; j++){
        cin>>b[i][j];
    }
   }
   
   int mat[N][P];
   for (int i = 0; i < N; i++){
    for (int j = 0; j < P; j++){
        mat[i][j] = 0;
        for (int k = 0; k < M; k++)
        {
            mat[i][j]+= a[i][k]*b[k][j];
        }
        cout<< mat[i][j]<<" ";
    }
    cout<<'\n';
   }
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int _t;cin>>_t;while(_t--)
    solve();
}