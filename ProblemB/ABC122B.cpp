#include<bits/stdc++.h>
//macros
using namespace std;
typedef long long ll;
#define pb push_back
#define rep(i, a, b) for(int i=(a); i<(b); i++)

int main(){
    string S;
    cin >> S;
    int length =0, res = 0;
    rep(i,0,S.size()){
        if(S[i]=='A'||S[i]=='C'||S[i]=='G'||S[i]=='T'){
            length++;
        }else{
            length=0;
        }
        res = max(res, length);
    }
    cout << res << endl;
}