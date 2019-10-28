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

vector<vector<char> > A(50,vector<char>(50));
vector<vector<char> > B(50,vector<char>(50));

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false); 
    int N, M;
    bool flag,res=false;
    cin >> N >> M;

    rep(i,0,N) rep(j,0,N) cin >> A[i][j];
    rep(i,0,M) rep(j,0,M) cin >> B[i][j];

    rep(i,0,N){
        rep(j,0,N){
            if(i+M>N || j+M>N) continue;
            flag = true; 
            rep(k,0,M){
                rep(l,0,M){
                    if(A[i+k][j+l] != B[k][l]) flag=false;
                }
            }
            if(flag) res=true;
        }
    }
    if(res) Yes;
    else No;
}