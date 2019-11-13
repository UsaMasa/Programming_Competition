#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
#define rep(i, a, b) for(int i=(a); i<(b); i++)

int main(){
    string S,T;
    cin >> S >> T;
    S += S;
  
    if(string(S).find(T)!=string::npos){
        cout << "Yes" << endl;
        return 0;
    }
        
    cout << "No" << endl;
}
