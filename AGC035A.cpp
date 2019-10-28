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

Vi b;
Vi res(0);
int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false); 
    int N;
    cin >> N;
    b.rs(N);
    rep(i,0,N) cin >> b[i];
    N--;
    int l=N;
    bool flag=true;
    while(b.size()>0){
        if(l==-1){
            flag = false;
            break;
        }
        if(b[l] == l+1){
            res.insert(res.begin(), l+1);
            //cout << b[l]<< "will be erased"<<endl;
            b.erase(b.begin()+l);
            N--;
            l=N;
        }else{
            l--;
        }
    }
    if(flag){
        rep(i,0,res.size()) COUT(res[i]);
    }else{
        COUT(-1);
    }

}