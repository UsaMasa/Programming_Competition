#include<bits/stdc++.h>
//macros
using namespace std;
typedef long long ll;
#define pb push_back
#define rep(i, a, b) for(int i=(a); i<(b); i++)

int main(){
    int N;
    cin >> N;
    vector<int> L(N);
    int m = 0, sum =0;
    rep(i,0,N){
        cin >> L[i];
        m = max(m, L[i]);
        sum += L[i];
    }
    if(m >= sum - m) cout << "No" << endl;
    else cout << "Yes" << endl;
}