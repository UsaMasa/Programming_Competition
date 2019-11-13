#include<bits/stdc++.h>
//macros
using namespace std;
typedef long long ll;
#define pb push_back
#define rep(i, a, b) for(int i=(a); i<(b); i++)

vector<vector<int> > A;
int main(){
    int N,M;
    cin >> N >> M;
    A.resize(N);
    vector<int> B(M);
    int res=0;
    rep(i,0,M) B[i] = N;
    rep(i,0,N){
        int k;
        cin >> k;
        A[i].resize(k);
        rep(j,0,k){
            cin >> A[i][j];
            B[A[i][j] - 1]--;
        }
    }
    rep(i,0,M){
        if(B[i]==0) res++;
    }
    cout << res << endl;

}