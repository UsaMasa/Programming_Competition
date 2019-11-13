//問題設定：無向グラフにおける、連結成分が幾つあるかを求めたい。
//N個の頂点があり、M本の辺で結ばれている。aiとbiはそれぞれの辺が結ばれていることを示す。
/*入力形式： N M
a0 b0
...
aN-1 bN-1
入力例
4 3
1 2
2 3
1 3
出力：2

入力例2
2 1
1 2
出力：1

頂点番号は1から始めることに注意。
*/
//コード参考：4-2　https://qiita.com/drken/items/a803d4fc4a727e02f7ba

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

typedef vector<vector<int> > Graph;
vector<bool> checked;

void dfs(const Graph &G, int i){
    checked[i]=true;
    for(auto j : G[i]){
        if(checked[j]) continue;
        dfs(G,j);
    }
}


int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false); 
    int N,M; cin >> N >> M;
    Graph G(N);checked.rs(N);
    rep(i,0,M){
        int a,b; cin >> a >> b;
        G[a-1].pb(b-1); G[b-1].pb(a-1);
    }
    int res=0;
    rep(i,0,N){
        if(checked[i]) continue;
        dfs(G, i);
        res++;
    }
    COUT(res);
}