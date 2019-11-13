#include<bits/stdc++.h>
//macros
using namespace std;
typedef long long ll;
#define pb push_back
#define rep(i, a, b) for(int i=(a); i<(b); i++)

int main(){
    int A,B,K;
    int index = 0;
    cin >> A >> B >> K;
    int N = max(A,B);
    rep(i,0,N){
        if(A%(N-i)==0 && B%(N-i)==0){
            index++;
            if(index == K) cout << (N-i) << endl;
        }
    }

}