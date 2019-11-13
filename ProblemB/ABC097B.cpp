#include<bits/stdc++.h>
//macros
using namespace std;
typedef long long ll;
#define pb push_back
#define rep(i, a, b) for(int i=(a); i<(b); i++)
const long long int mod = 1e9 + 7;
int main()
{
    int X, res=0, temp=0;
    cin >> X;
    rep(i,1,X+1){
        rep(j,2,X+2){
            temp = pow(i,j);
            if(temp>X) break;
            res = max(temp, res);
        }
    }
    cout << res << endl;
}