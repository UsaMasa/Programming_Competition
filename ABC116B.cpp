#include<bits/stdc++.h>
//macros
using namespace std;
typedef long long ll;
#define pb push_back
#define rep(i, a, b) for(int i=(a); i<(b); i++)

int main(){
    int s, count=1;
    cin >> s;
    int a = s;
    map<int, int> mp;
    mp[a] = 1;
    while(count<1000001){
        if(a%2==0) a = a/2;
        else a = 3*a+1;
        if(mp[a]==0) mp[a]=1;
        else{
            cout << count + 1 << endl;
            return 0;
        }
        count++;
    }

}