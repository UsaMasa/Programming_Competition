#include<bits/stdc++.h>
//macros
using namespace std;
typedef long long ll;
#define pb push_back
#define rep(i, a, b) for(int i=(a); i<(b); i++)
const long long int mod = 1e9 + 7;
int main()
{
    int a, b ;
    cin >> a >> b;
    int del = b - a;
    int x = del * (del-1) / 2 - a;

    cout << x << endl;
}