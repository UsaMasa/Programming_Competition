#include<bits/stdc++.h>
//macros
using namespace std;
typedef long long ll;
typedef pair<int, int > P;
#define pb push_back
#define rep(i, a, b) for(ll i=(a); i<(b); i++)
const long long int mod = 1e9 + 7;


string s;
int main()
{
    cin >> s;
    ll cnt_g=0,res=0;
    rep(i,0,s.size()){
        if(s[i] == 'g'){
            if(cnt_g>0){
                cnt_g--;
                res++;
            }else{
                cnt_g++;
            }
        }else{
            if(cnt_g>0){
                cnt_g--;
            }else{
                cnt_g++;
                res--;
            }
        }
    }
    cout << res << endl;

}