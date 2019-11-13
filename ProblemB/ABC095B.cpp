#include<bits/stdc++.h>
//macros
using namespace std;
typedef long long ll;
#define pb push_back
#define rep(i, a, b) for(int i=(a); i<(b); i++)
const long long int mod = 1e9 + 7;
int m[100];
int main()
{
    ll N,X,res=0;
    ll sum=0;
    cin  >> N >> X;
    rep(i,0,N){
        cin >> m[i];
        sum += m[i];
    }
    res = N;
    X -= sum;
    int mi = *min_element(m, m+N);
    while(X>=mi){
        res++;
        X-=mi;
    }
    cout << res << endl;
}