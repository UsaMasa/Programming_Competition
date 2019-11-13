// reference : editorial

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
#define Yes cout << "Yes" << endl
#define No cout << "No" << endl
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define COUT(a) cout << a << endl
#define ALL(a) (a).begin(),(a).end()
const long long int mod = 1e9 + 7;

ll cnt_digits(ll N){
    ll digits = 0;
    while(N>0){
        N/=10;
        digits++;
    }
    return digits;
}

int main(){
    ll N, ans=0;
    cin >> N;
    ans = cnt_digits(N);
    for(ll i=2; i*i<=N; i++){
        if(N%i!=0) continue;
        ll j = N/i;
        ll temp = max(cnt_digits(i),cnt_digits(j));
        if(ans>temp) ans = temp;
    }
    COUT(ans);
}