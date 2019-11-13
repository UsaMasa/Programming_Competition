//コード参考：https://qiita.com/drken/items/a803d4fc4a727e02f7ba
//問題：http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=1160&lang=jp
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
Graph G;
int H,W;
void dfs(int h, int w){
    G[h][w] = 0;
    rep(dh,-1,2){
        rep(dw,-1,2){
            int nexth = h+dh, nextw = w+dw;
            if(nexth<0||nexth>=H||nextw<0||nextw>=W) continue;
            if(G[nexth][nextw]==0) continue;
            dfs(nexth, nextw);
        }
    }
}



int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false); 
    cin >> W >> H;
    G.rs(H);
    rep(h,0,H){
        G[h].rs(W);
        rep(w,0,W){
            cin >> G[h][w];
        }
    }
    int res=0;
    rep(h,0,H){
        rep(w,0,W){
            if(G[h][w]==0) continue;
            dfs(h,w);
            res++;
        }
    }
    COUT(res);
}