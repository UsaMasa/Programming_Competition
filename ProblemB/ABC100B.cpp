#include<iostream>
using namespace std;
#include<cmath>

int main(){
  int D,N,ans=0;
  cin >> D >> N;
  ans += pow(100,D);
  ans *= N;
  if(N==100) ans+=pow(100,D);
  cout << ans << endl;
}
