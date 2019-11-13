#include<iostream>
using namespace std;
typedef long long ll;
int main(){
    ll N,sum=0,temp;
    cin >> N;
    temp = N;
    while(temp > 0){
        sum += temp%10;
        temp /= 10;
    }
    //cout << sum << endl;
    if(N%sum==0) cout << "Yes" << endl;
    else cout << "No" << endl;

}