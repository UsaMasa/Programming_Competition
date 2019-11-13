#include<bits/stdc++.h>
//macros
using namespace std;
typedef long long ll;
#define pb push_back
#define rep(i, a, b) for(int i=(a); i<(b); i++)

int main(){
    int N, x,a,b,c;
    cin >> N;
    a = N/100;
    b = N%100/10;
    c = N%10;
    while(N<1000){
        if(a == b && b == c){
            cout << N << endl;
            return 0;
        }
        else{
            N++;
            a = N/100;
            b = N%100/10;
            c = N%10;
        }
    }
    return 0;
}