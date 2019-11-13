#include<bits/stdc++.h>
//macros
using namespace std;
typedef long long ll;
typedef pair<int, int > P;
#define pb push_back
#define rep(i, a, b) for(int i=(a); i<=(b); i++)
const long long int mod = 1e9 + 7;

int main()
{
  int N; ll Y;
  ll sum = 0;
  cin >> N >> Y;
  rep(i, 0, N){
    rep(j,0,N-i){
      sum = 10000*(N-i-j)+5000*j+1000*i;
      if(sum == Y){
	cout << N-i-j << " "<< j <<" " <<i << endl;
	return 0;
      }
    }
  }
  cout << "-1 -1 -1" << endl;
  return 0;
}
