#include<bits/stdc++.h>
//macros
using namespace std;
typedef long long ll;
#define pb push_back
#define rep(i, a, b) for(int i=(a); i<(b); i++)

int main(){
    string S;
    cin >> S;
    int diff = 10000;
    rep(i,0,S.size()-2){
        int X = (int)((char)S[i] - '0')*100 + (int)((char)S[i+1] - '0')*10 + (int)((char)S[i+2] - '0');
        if(abs(753 - X) < diff){
            diff = abs(753-X);
        }
    }
    cout << diff << endl;
}