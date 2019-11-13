#include<iostream>
using namespace std;

#include<vector>
#define pb push_back
#define rep(i, a, b) for(int i=(a); i<(b); i++)
typedef long long ll;
#include<cmath>
#include<algorithm>
int main(){
    ll N;
    cin >> N;
    vector<ll> A;
    rep(i,0,N) {
        ll temp;
        cin >> temp;
        A.pb(temp);
    }
    ll min = *min_element(A.begin(), A.end());
    ll max = *max_element(A.begin(), A.end());

    cout << abs(max - min) << endl;
}