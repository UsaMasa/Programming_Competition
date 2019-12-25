// This is the template example file for programming//
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

ll lcm(ll x,ll y){
  ll a=x,b=y,r;
  if(x<y) swap(x,y);
  r=x%y;
  while(r!=0) x=y,y=r,r=x%y;
  return a/y*b;
}

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false); 
    int a,b;
    cin >> a >> b;
    ll res = lcm(a,b);
    cout << res << endl;
}