#include<bits/stdc++.h>
//macros
using namespace std;
typedef long long ll;
#define pb push_back
#define rep(i, a, b) for(int i=(a); i<(b); i++)

int main(){
    int N;
    cin >> N;
    double sum = 0;
    rep(i,0,N){
        double x;
        string u;
        cin >> x >> u;
        if(u == "JPY") sum += x;
        else sum += 380000.0*x;
    }
    cout << sum << endl;
}