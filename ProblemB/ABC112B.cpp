#include<bits/stdc++.h>
//macros
using namespace std;
typedef long long ll;
#define pb push_back
#define rep(i, a, b) for(int i=(a); i<(b); i++)

int main(){
    int N,T;
    cin >> N >> T;
    vector<int> c(N);
    vector<int> t(N);
    int cost = 1001;
    rep(i,0,N){
        cin >> c[i] >> t[i];
        if(t[i]<=T){
            cost = min(c[i], cost);
        }
    }
    if(cost == 1001) cout << "TLE" << endl;
    else cout << cost << endl;
}