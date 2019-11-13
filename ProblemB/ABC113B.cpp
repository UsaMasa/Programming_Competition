#include<bits/stdc++.h>
//macros
using namespace std;
typedef long long ll;
#define pb push_back
#define rep(i, a, b) for(int i=(a); i<(b); i++)

int main(){
    double N, T,A;
    cin >> N >> T >> A;
    vector<double> h(N);
    double res = 99999999;
    int index = 0;
    rep(i,0,N){
        cin >> h[i];
        double diff = fabs(A - (T - 0.006*h[i]));
        if(min(res, diff) == diff){
            res = diff;
            index = i+1;
        }
    }
    cout << index << endl;

}