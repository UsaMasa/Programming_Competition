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

Vi A;
int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false); 
    int N,D,X;
    cin >> N >> D >> X;
    A.rs(N);
    rep(i,0,N) cin >> A[i];
    int choco=0;
    rep(i,0,N){
        int temp=1;
        while(temp<=D){
            temp += A[i];
            choco++;
        }
    }
    COUT(choco+X);
}