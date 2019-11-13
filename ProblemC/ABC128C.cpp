//Reference: editorial (#5640467)
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
Vi k(0); 
Vi P(0);
vector<vector<int> > S;

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false); 
    int N,M;
    cin >> N >> M;
    k.rs(M);P.rs(M);S.rs(M);

    rep(i,0,M){
        cin >> k[i];
        S[i].rs(k[i]);
        rep(j,0,k[i]){
            cin >> S[i][j];
            S[i][j]--;
        }
    }
    rep(i,0,M) cin >> P[i];
    
    int ans=0;
    rep(i,0,(1<<N)){//2^N個の状態の列挙
        bool all_light = true;
        rep(j,0,M){//M個のライトの状態の確認
            int each_light=0;//j番目のlightに繋がったswitch onの総数
            for(auto id : S[j]){
                //iとのANDを取ることで、2^N通りの部分集合を試すことが出来る
                if((i>>id) & 1) each_light++;
            }
            each_light%=2;
            if(each_light!=P[j]) all_light=false;
        }
        if(all_light) ans++;
    }
    COUT(ans);
}