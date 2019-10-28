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
const long long int mod = 1e9 + 7;
#define Yes cout << "Yes" << endl
#define No cout << "No" << endl
#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;
#define COUT(a) cout << a << endl;

int dp[200001][2];

//dp[i][j]: s[i]とs[i-1]を比べたときに、同じならばs[i]とs[i-1]を結合する (j=1)。
//s[i]とs[i-1]が異なるならば、分割する (j=0)。
int main(){
    string S;
    cin >> S;
    
   
    cout << max(dp[S.size()-1][0],dp[S.size()-1][1]) << endl;

}