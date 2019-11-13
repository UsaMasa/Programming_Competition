#include<bits/stdc++.h>
//macros
using namespace std;
typedef long long ll;
#define pb push_back
#define rep(i, a, b) for(int i=(a); i<(b); i++)

int main(){
    int N;
    map<string, bool> S;
    cin >> N;
    bool flag=false;
    string prev = "*";
    rep(i, 0, N)
    {
        string s;
        cin >> s;
        if (S[s] == false)
        {
            S[s] = true;
        }
        else
        {
            flag = true;
        }
        if(prev != "*"){
            if(prev[prev.size()-1] != s[0]){
                flag = true;
            }
        }


        prev = s;
    }
    if(flag) cout << "No" << endl;
    else cout << "Yes" << endl;

}