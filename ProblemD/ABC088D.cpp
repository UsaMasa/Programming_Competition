#include<bits/stdc++.h>
//macros
using namespace std;
typedef long long ll;
typedef pair<int, int > P;
#define pb push_back
#define rep(i, a, b) for(int i=(a); i<(b); i++)
const long long int mod = 1e9 + 7;
int H;
int W;
int cnt;
int dx[4] = {1,0,-1,0}, dy[4] = {0,1,0,-1};
char s[50][50];
int d[50][50];
int bfs(){
    queue<P> q;
    rep(i,0,W){
        rep(j,0,H){
            d[i][j] = -1;
        }
    }
    q.push(P(0,0));
    d[0][0] = 0;

    while(!q.empty()){
        P p = q.front(); q.pop();
        if(p.first == W-1 && p.second == H-1) break;
        rep(i,0,4){
            int nx = p.first + dx[i], ny = p.second + dy[i];
            if(0<=nx && nx<W && 0<=ny && ny<H
            && s[ny][nx] != '#' && d[nx][ny] == -1){
                q.push(P(nx,ny));
                d[nx][ny] = d[p.first][p.second] + 1;
                //cout << nx << "," << ny << " " <<d[nx][ny] << endl;
            }                       
        }

    }
    return d[W-1][H-1];
}



int main()
{
    cin >> H >>W;
    rep(i,0,H){
        rep(j,0,W){
            cin >> s[i][j];
            if(s[i][j]=='.') cnt++;
        }
    }
    int res = bfs();
    if(res == -1){
        cout << "-1" << endl;
        return 0;
    }else{
        res = cnt-res-1;
        cout << res << endl;
    }
    return 0;

}
