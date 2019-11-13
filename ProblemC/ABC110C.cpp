#include<bits/stdc++.h>
//macros
using namespace std;
typedef long long ll;
typedef pair<int, int > P;
#define pb push_back
#define rep(i, a, b) for(int i=(a); i<(b); i++)
const long long int mod = 1e9 + 7;

int s[26];
int t[26];
int main()
{
    string S,T;
    cin >> S >> T;
    rep(i,0,S.size()){
        s[S[i]-'a']++;
        t[T[i]-'a']++;
    }
    sort(s, s+26);
    sort(t, t+26);
    rep(i,0,26){
        if(s[i] != t[i]){
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
}