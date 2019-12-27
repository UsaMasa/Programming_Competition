//Reference : editorial
// This is the template example file for programming//
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

int N;
vector<Vi > to;
Vi dist;

void dfs(int v, int d=0, int p=-1){
    //今の頂点、距離、親
    dist[v]=d;
    for(int u : to[v]){
        if(u==p) continue;
        dfs(u,d+1,v);
    }
}

Vi calcDist(int s){
    dist = vector<int>(N);
    dfs(s);
    return dist;
}


int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);  
    int u,v;   
    cin >> N >> u >> v;
    u--;v--;
    to.rs(N);
    rep(i,0,N-1){
        int temp1,temp2;
        cin >> temp1 >> temp2;
        temp1--;temp2--;
        to[temp1].pb(temp2);
        to[temp2].pb(temp1);
    }
    //Sからの距離がTからの距離よりも小さく、かつTからの距離が最大のところに行きたい
    Vi distS = calcDist(u);
    Vi distT = calcDist(v);

    int mx=0;
    rep(i,0,N){
        if(distS[i]<distT[i]) mx = max(mx, distT[i]);
    }
    int ans = mx-1;
    COUT(ans);
}