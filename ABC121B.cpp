#include<bits/stdc++.h>
//macros
using namespace std;
typedef long long ll;
#define pb push_back
#define rep(i, a, b) for(int i=(a); i<(b); i++)

int main(){
    int N,M,C,res=0;
    cin >> N >> M >>C;
    vector<int> B(M);
    vector<vector<int> > A;
    A.resize(N);
    rep(i,0,M) cin >> B[i];
    rep(i,0,N){
        int tmp=0;
        A[i].resize(M);
        rep(j,0,M){
            cin >> A[i][j];
            tmp += A[i][j]*B[j];
        }
        tmp += C;
        if(tmp>0) res++;
    }
    cout << res << endl;
}