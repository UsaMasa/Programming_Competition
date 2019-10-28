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
#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;
#define COUT(a) cout << a << endl;

int main(){
    ll a, b, x , res =0;
    cin >> a >> b >>x;
    ll tmp0 = a%x==0 ? a : x*(a/x)+x;
    ll tmp1 = b%x==0 ? b : x*(b/x);
    res = max((tmp1-tmp0)/x+1,(ll)0);
    cout << res << endl;
}
