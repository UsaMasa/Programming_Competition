#include<bits/stdc++.h>
//macros
using namespace std;
typedef long long ll;
#define pb push_back
#define rep(i, a, b) for(int i=(a); i<(b); i++)

int main(){
    string S;
    cin >> S;
    int index = -1;
    bool Flag1=false, Flag2=false, Flag3=true;
    if(S[0]=='A') Flag1 = true;
    string subS = S.substr(2,S.size()-3);
    if(string(subS).find('C') != string::npos){
        Flag2 = true;
        index = string(subS).find('C')+2;
        //cout << subS<< index << endl;
    }
    rep(i,1,S.size()){
        if(i==index) continue;
        if(isupper(S[i]))
            Flag3=false;
    }
    if(Flag1 && Flag2 && Flag3) cout << "AC" <<endl;
    else cout << "WA" << endl;
    //cout << Flag1 << Flag2 << Flag3 << endl;
}
   