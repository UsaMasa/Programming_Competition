#include<bits/stdc++.h>
//macros
using namespace std;
typedef long long ll;
#define pb push_back
#define rep(i, a, b) for(int i=(a); i<(b); i++)
const long long int mod = 1e9 + 7;
int main()
{
    int a,b,c,k,sum=0;
    cin >> a >> b >> c >> k;
    sum = a+b+c;
    int ma = max(a,b);
    ma = max(ma,c);
    ma = ma*pow(2,k) - ma;
    sum += ma;
    cout << sum << endl;

}