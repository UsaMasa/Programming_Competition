#include<bits/stdc++.h>
//macros
using namespace std;
typedef long long ll;
typedef pair<int, int > Pii;
typedef pair<ll, ll> Pll;
typedef vector<int> Vi;
typedef vector<ll> Vll;
#define pb push_back
#define rs resize 
#define rep(i, a, b) for(int i=(a); i<(b); i++)
const long long int mod = 1e9 + 7;
#define Yes cout << "Yes" << endl
#define No cout << "No" << endl
#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;
#define COUT(a) cout << a << endl;

Vll v(100000);

int main(){
    ll n;
    cin >> n;
    map<ll, ll> m0;
    map<ll, ll> m1;
    ll res = 0, num = 0, max_num = 0, max_num1 = 0;
    ll max2_num=0, max2_num1=0;
    ll max_num_index = 0;
    ll max2_num_index = 0;
    ll max_num_index1 = 0;
    ll max2_num_index1 = 0;
    v.rs(n);

    rep(i,0,n) cin >> v[i];
    rep(i,0,n){
        if(i%2==1){
            if(m1[v[i]]==0) m1[v[i]] = 0;
            m1[v[i]]++;
        }else{
            if(m0[v[i]]==0) m0[v[i]] = 0;
            m0[v[i]]++;
        }
    }

    for(auto &elem : m0){
        ll num = elem.second;
        if(num < max_num){
            res += num;
            if(max2_num < num){
                max2_num = num;
                max2_num_index = elem.first;
            }
        }else{
            res += max_num;
            max2_num = max_num;
            max_num = num;
            max2_num_index = max_num_index1;
            max_num_index = elem.first;     
        }
    }
    
    for(auto &elem : m1){
        ll num = elem.second;
        if(num < max_num1){
            res += num;
            if(max2_num1 < num){
                max2_num1 = num;
                max2_num_index1 = elem.first;
            }
        }else{
            res += max_num1;
            max2_num1 = max_num1;
            max_num1 = num;
            max2_num_index1 = max_num_index1;
            max_num_index1 = elem.first;     
        }
    }
    
    
    if(max_num_index == max_num_index1){
        res += max_num;
        ll tmp = max(max2_num1, max2_num);
        res -= tmp;
    }
    cout << res << endl;

}



