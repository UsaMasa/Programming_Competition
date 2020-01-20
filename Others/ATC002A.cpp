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
int R;
int C;
int sx,sy;
int gx,gy;
vector<vector<char> > c;
vector<vector<int> > dist;

int bfs(int sx, int sy){
    queue<Pii> q;
    q.push(Pii(sy,sx));
    dist[sy][sx]=0;

    while(!q.empty()){
        Pii q_temp = q.front(); q.pop();
        if(q_temp.first == gy
        && q_temp.second == gx) break;
        rep(i,0,4){
            int ny = q_temp.first + dy[i];
            int nx = q_temp.second + dx[i];
            if(
            ny>=R || nx >= C || nx<0 || ny<0
            ) continue;
            else{
                if(c[ny][nx]=='#' || dist[ny][nx]!=-1) continue;
                q.push(Pii(ny,nx));
                dist[ny][nx] = dist[q_temp.first][q_temp.second]+1;
            }
        }
    }
    return dist[gy][gx];
}

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false); 
    cin >> R >> C >> sy >> sx >> gy >> gx;
    sx--;sy--;gx--;gy--;
    c.rs(R);
    dist.rs(R);
    rep(i,0,R){
        c[i].rs(C);
        dist[i].rs(C);
        rep(j,0,C){
            cin >> c[i][j];
            dist[i][j]=-1;
        }
    }
    int res = bfs(sy, sx);
    cout<< res << endl;
}