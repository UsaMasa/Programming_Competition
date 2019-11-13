#include<bits/stdc++.h>
//macros
using namespace std;
typedef long long ll;
typedef pair<int, int > P;
#define pb push_back
#define rep(i, a, b) for(int i=(a); i<(b); i++)
const long long int mod = 1e9 + 7;


vector<ll> A(200001);
vector<ll> s(200001);
int main()
{
    ll N,res=0;
    cin >> N;
    A.resize(N);s.resize(N+1);
    rep(i,0,N) cin >> A[i];
    rep(i,0,N) s[i+1] = s[i]+A[i];
    sort(s.begin(),s.end());
    ll count=0;
    rep(i,0,N){
        if(s[i] == s[i+1]){
            count++;
        }else{
            res += (count*(count+1))/2;
            count = 0;
        }
    }
    res += (count*(count+1))/2;
    cout << res << endl;
}