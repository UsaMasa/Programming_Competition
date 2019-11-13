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
    int N,M,res=0;
    cin >> N;
    map<string,int> s;
    map<string,int> t;
    rep(i,0,N){
        string s_temp;
        cin >> s_temp;
        if(s[s_temp]==0) s[s_temp]=0;
        s[s_temp]++;
    }
    cin >> M;
    rep(i,0,M){
        string t_temp;
        cin >> t_temp;
        if(t[t_temp]==0) t[t_temp]=0;
        t[t_temp]++;
    }
    for(auto x : s){
        int res_temp=0;
        string s_temp = x.first;
        for(auto y : t){
            string t_temp = y.first;
            if(s_temp == t_temp){
                if(x.second > y.second){
                    res_temp = x.second - y.second;
                }
            }
        }
        //cout<<s_temp<<res_temp<<endl;
        if(res_temp == 0) res=max(res,x.second);
        else res=max(res,res_temp);
    }
    COUT(res);
    return 0;
}