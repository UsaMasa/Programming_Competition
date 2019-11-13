#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
#define rep(i, a, b) for(int i=(a); i<(b); i++)

int main(){
    int N,count =0, res = 0;
    cin >> N;
    rep(a,8,N+1){
        rep(i,1,N+1){
            if(a%i==0) count++;
        }
        if(count == 8 && a%2==1)res++;
        count = 0;
    }
    cout << res << endl;
}