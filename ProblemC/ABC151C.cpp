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


int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false); 
    ll N,M;
    ll ans=0, wa=0;
    cin >> N >> M;
    map<ll, ll> sub;
    repll(i,0,M){
        ll p; string s;
        cin >> p >> s;
        if(sub[p]>=0){
            if(s == "AC"){
                ans++;
                wa += sub[p];
                sub[p]=-1;
            }else{
                sub[p]++;
            }
        }
    }
    cout << ans << " " << wa << endl;
}
