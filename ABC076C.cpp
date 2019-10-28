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
    string S,Sd,T;
    bool flag;
    int res=-1;
    cin >> Sd >> T;
    S = Sd;
    rep(i,0,Sd.size()-T.size()+1){
        rep(j,0,T.size()){
            if(Sd[i+j] != T[j] && Sd[i+j] != '?') break;
            if(j==T.size()-1) flag=true;
        }
        if(flag){
            res = i;
            flag = false;
        }
    }
    if(res!=-1){
        rep(i,0,Sd.size()){
            if(i<res || res+T.size()<=i){
                if(S[i]=='?') S[i] = 'a';
            }else{
                S[i] = T[i-res];
            }
        }
    }

    if(res!=-1) COUT(S);
    else COUT("UNRESTORABLE");
}