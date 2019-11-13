#include<bits/stdc++.h>
//macros
using namespace std;
typedef long long ll;
#define pb push_back
#define rep(i, a, b) for(int i=(a); i<(b); i++)

int main(){
    int N;
    cin >> N;
    vector<int> p(N);
    int sum = 0;
    int half = 0;
    rep(i,0,N){
        cin >> p[i];
        half= max(half, p[i]);
        sum += p[i];
    }
    cout << sum - half/2 << endl;

}