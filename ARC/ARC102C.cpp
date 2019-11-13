#include<bits/stdc++.h>
//macros
using namespace std;
typedef long long ll;
typedef pair<int, int > P;
#define pb push_back
#define rep(i, a, b) for(int i=(a); i<(b); i++)
const long long int mod = 1e9 + 7;

int main()
{
    ll N,K,res;
    cin >> N >> K;
    if(K%2 == 1) res = (N/K)*(N/K)*(N/K); 
    else res = (N/K)*(N/K)*(N/K) + (N/(K/2)-N/K)*(N/(K/2)-N/K)*(N/(K/2)-N/K);
    cout << res << endl;
}