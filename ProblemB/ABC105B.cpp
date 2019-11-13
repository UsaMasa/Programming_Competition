#include<bits/stdc++.h>
//macros
using namespace std;
typedef long long ll;
#define pb push_back
#define rep(i, a, b) for(int i=(a); i<(b); i++)

int main(){
    int N;
    cin >> N;
    int cake_max = 100/4;
    int donut_max = 100/7;
    rep(i,0,cake_max){
        rep(j,0,donut_max){
            if(i*4+j*7 == N){
                cout << "Yes" << endl;
                return 0;
            }
        }
    }
    cout << "No" << endl;

}