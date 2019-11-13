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

map<ll, ll> a;
int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false); 
    ll N,res=0;
    cin >> N;
    rep(i,0,N){
        ll temp;
        cin >> temp;
        a[temp]++;
    }
    for(auto x : a){
        if(x.first>x.second) res+=x.second;
        else if(x.second>x.first) res+=x.second-x.first;
    }
    COUT(res);
}

