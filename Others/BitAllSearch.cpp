// bit全探索について学ぶ
// 参考：https://qiita.com/hareku/items/3d08511eab56a481c7db
//上記のリンクを元に一部改変して作成

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
#define repll(i, a, b) for(ll i=(a); i<(b); i++)
#define Yes cout << "Yes" << endl
#define No cout << "No" << endl
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define COUT(a) cout << a << endl
#define ALL(a) (a).begin(),(a).end()
const long long int mod = 1e9 + 7;

//bit全探索とは、bit演算を用いて部分集合を列挙する手法
//例えばn=3個の状態のtrue/falseを判定したい。すなわち
//{f,f,f},{t,f,f},...{t,t,t}
vector<bool> s;
int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false); 
    int n = 3;
    
    //1<<n == 2^n
    for(int bit=0; bit < (1<<n); bit++){
        s.rs(0);s.rs(n);//initialization
        rep(i,0,n){
            //n個の要素に関して部分集合を作る
            //ここではtrue/falseを判定する
            if(bit & (1<<i)) s[i]=true;
            else s[i]=false;
        }
        cout << bit << " : ";
        rep(i,0,n) cout << s[i] << " ";
        cout << " " << endl;
    }
    
}

/*
出力例
0 : 0 0 0  
1 : 1 0 0  
2 : 0 1 0  
3 : 1 1 0  
4 : 0 0 1  
5 : 1 0 1  
6 : 0 1 1  
7 : 1 1 1  
*/