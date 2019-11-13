

#include<bits/stdc++.h>
//macros
using namespace std;
typedef long long ll;
typedef pair<int, int > Pii;
typedef pair<ll, ll> Pll;
typedef vector<int> Vi;
typedef vector<ll> Vll;
#define pb push_back
#define rs resize 
#define rep(i, a, b) for(int i=(a); i<(b); i++)
const long long int mod = 1e9 + 7;
#define Yes cout << "Yes" << endl
#define No cout << "No" << endl
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define COUT(a) cout << a << endl

Vi A(0);
int main(){
    int N;
    cin >> N;
    A.rs(N);
    rep(i,0,N) cin >> A[i];
    Vi B(N);
    rep(i,0,N){
        B[A[i]-1] = i+1;
    }

    rep(i,0,N) COUT(B[i]);

}
