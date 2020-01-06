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
    int N; cin >> N;
    Vi A(N); vector<vector<int> > x(N),y(N);
    int ans=0;
    rep(i,0,N){
        cin >> A[i];
        x[i].rs(A[i]); y[i].rs(A[i]);
        rep(j,0,A[i]){
            cin >> x[i][j] >> y[i][j];
            x[i][j]--;
        }
    }

    for(int bit=0; bit < (1<<N); bit++){
        Vi S(N,0); bool flag = true; int temp=0;
        rep(i,0,N){
            if(bit & (1<<i)){
                S[i]=1;
                temp++;
            }
            //cout << S[i];
        }
        //cout << ", " << temp<<endl;
        rep(i,0,S.size()){
            if(S[i]==0) continue;
            rep(j,0,A[i]){
                if((y[i][j]==1 && S[x[i][j]]==1)
                || (y[i][j]==0 && S[x[i][j]]==0)) continue;
                flag = false;
            }
        }
        if(flag) ans = max(ans,temp);
    }
    COUT(ans);
}