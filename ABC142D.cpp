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

ll gcd(ll x, ll y){
  if(x < y) swap(x,y);
  if(y == 0) return x;
  return gcd(x%y,y);
}

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false); 
    ll A,B,C,res=1;
    cin >> A >> B;
    C = gcd(A,B);
    for(ll i=2; i*i<=C; i++){
        if(C%i==0){
            while(C%i==0) C = C/i;
            res++;
        }
    }
    if(C>1) res++;
    COUT(res);
}
