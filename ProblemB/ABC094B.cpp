#include<bits/stdc++.h>
//macros
using namespace std;
typedef long long ll;
typedef pair<int, int > P;
#define pb push_back
#define rep(i, a, b) for(int i=(a); i<(b); i++)
const long long int mod = 1e9 + 7;

int A[101];
int main()
{
    int N,M,X,f=0,b=0;
    cin >> N >> M >> X;
    rep(i,0,M) cin >> A[i];   
    rep(i,0,M){
        if(A[i]<X) f++;
        else b++;
    }
    if(f > b) cout << b << endl;
    else cout << f << endl;
}