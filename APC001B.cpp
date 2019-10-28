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

Vll a(10000);
Vll b(10000);

int main(){
    int N;
    ll sum_a=0,sum_b=0,cnt=0;
    cin >> N;
    a.rs(N);b.rs(N);
    rep(i,0,N){
        cin >> a[i];
        sum_a += a[i];
    }
    rep(i,0,N){
        cin >> b[i];
        sum_b += b[i];
    }
    deque<ll> q;
    rep(i,0,N){
        ll dif=a[i]-b[i];
        if(dif!=0) q.pb(dif);
    }
    sort(q.begin(),q.end());
    while(!q.empty()){
        if(q.size()>1){
            ll c=q.front();q.pop_front();//smaller
            ll d=q.back();q.pop_back();//bigger
            if(c>0){
                No;
                return 0;
            }
            c+=2;d--;
            if(c<0) q.push_front(c);
            else if(c>0) q.pb(c);
            if(d>0) q.pb(d);
        }else if(q.size()==1){
            ll c=q.front();q.pop_front();
            if(c>0){
                No;
                return 0;
            }
            c++;
            if(c<0) q.pb(c);
        }
    }
    Yes;
}