

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


int main(){
    ll N, P;
    ll res = 1;
    map<ll, ll> list;
    cin >> N >> P;
    for(ll i=2; i*i<=P; i++){
        while(P % i == 0){
            list[i]++;
            P/=i;
        }
    }
    if(P != 1) list[P]++;
    for(auto i : list){
        ll common = i.second / N;
        res *= pow(i.first, common); 
    }
    COUT(res);
}