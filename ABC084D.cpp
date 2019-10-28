#include<bits/stdc++.h>
//macros
using namespace std;
typedef long long ll;
typedef pair<int, int > P;
#define pb push_back
#define rep(i, a, b) for(ll i=(a); i<(b); i++)
const long long int mod = 1e9 + 7;
ll l[100001];
ll r[100001];

ll prime[100001];
bool is_prime[100001];

ll c[100002];

void sieve(ll n){
    ll p = 0;
    rep(i,0,n+1) is_prime[i] = true;
    is_prime[0] = is_prime[1] = false;
    rep(i,2,n+1){
        if(is_prime[i]){
            prime[p++] = i;
            for(ll j=2*i; j<=n; j+=i) is_prime[j] = false;
        }
    }
}

int main()
{
    ll n = 100000;
    ll Q;
    cin >> Q;
    rep(i,0,Q) cin >> l[i] >> r[i];

    sieve(n);
    for(ll i=3; i<=n; i+=2){
        if(is_prime[i] && is_prime[(i+1)/2]) c[i]++; 
    }
    for(ll i=3; i<=n; i++){
        c[i] += c[i-1];
    }
    rep(i,0,Q){
        cout << c[r[i]] - c[l[i]-1] << endl;
    }
}