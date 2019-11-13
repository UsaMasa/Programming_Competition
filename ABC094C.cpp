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
#define repll(i, a, b) for(ll i=(a); i<(b); i++)
#define Yes cout << "Yes" << endl
#define No cout << "No" << endl
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define COUT(a) cout << a << endl
#define ALL(a) (a).begin(),(a).end()
const long long int mod = 1e9 + 7;

Vll X;
Vll Y;
int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    ll N; 
    cin >> N;
    X.rs(N);
    repll(i,0,N) cin >> X[i];
    Y = X;
    sort(ALL(X));

    repll(i,0,N){
        if(Y[i] < X[N/2]) COUT(X[N/2]);
        else COUT(X[N/2-1]);
    }
}

