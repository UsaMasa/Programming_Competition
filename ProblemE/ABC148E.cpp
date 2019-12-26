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

ll count_a(ll n,ll a){
    ll init = a*2;
    ll res = 0;
    while(init<=n){
        res+=n/init;
        init*=a;
    }
    return res;
}


int main(){
    //cin.tie(nullptr);
    //ios::sync_with_stdio(false); 
    ll n;
    cin >> n;
    ll res = 0, div=0;
    if(n%2==1){
        COUT(0); return 0;
    }else{
        res = count_a(n,5);
    }   
    COUT(res);
}