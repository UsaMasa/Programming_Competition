#include<bits/stdc++.h>
//macros
using namespace std;
typedef long long ll;
#define pb push_back
#define rep(i, a, b) for(int i=(a); i<(b); i++)

class UnionFind{
    //par[i] = jの時、iの親がjに相当
    vector<int> par, rank, size;
public:
    
    UnionFind(int N) //par(N)を全て根として初期化
    : par(N), rank(N), size(N)
    {
        rep(i,0,N){
            par[i] = i;
            rank[i] = 0;
            size[i] = 1;
        }
    }
    int root(int x) 
    {
        if(par[x] == x) return x;
        return par[x] = root(par[x]);
    }
    bool unite(int x, int y)
    {
        int rx = root(x);
        int ry = root(y);
        if(rx == ry) return false;
        //rxが常に根に来るようにする。
        if(rank[rx] < rank[ry]) swap(rx,ry);
        if(rank[rx] == rank[ry]) rank[rx]++;
        par[ry] = rx;
        return true;
    }
    bool isSame(int x, int y){
        int rx = root(x);
        int ry = root(y);
        return rx == ry;
    }
};

int main(){
    int N,M;
    cin >> N >> M;
    UnionFind UF(N);
    rep(i,0,M){
        int x, y, z;
        cin >> x >> y >> z;
        UF.unite(x-1, y-1);//0-index
    }
    set<int> s;
    rep(i,0,N) s.insert(UF.root(i));
    cout << s.size() << endl;
}