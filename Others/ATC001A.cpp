// 参考先 : https://qiita.com/drken/items/a803d4fc4a727e02f7ba


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

const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};
int H,W;
vector<string> m;
bool checked[501][501];

void dfs(int h, int w){
    checked[h][w]=true;
    rep(i,0,4){
        int next_h=h+dx[i];
        int next_w=w+dy[i];
        if(next_h<0 || next_h>=H || next_w<0 || next_w>=W) continue;
        if(m[next_h][next_w]=='#') continue;
        if(checked[next_h][next_w] == true) continue;
        dfs(next_h,next_w);
    }
}

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false); 
    cin >> H >> W;
    m.rs(H);
    rep(h,0,H) cin >> m[h];
    int sh,sw, gh,gw;
    rep(h,0,H){
        rep(w,0,W){
            if(m[h][w]=='s') sh=h,sw=w;
            if(m[h][w]=='g') gh=h,gw=w;
        }
    }
    dfs(sh,sw);
    if(checked[gh][gw]) Yes;
    else No;
}