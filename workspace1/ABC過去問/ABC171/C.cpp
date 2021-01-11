#include <bits/stdc++.h>
using namespace std;
using ll = long long;


int main(){
    ll n;
    cin >> n;
    ll num = n;
    ll m = 0;
    while(num!=0){
        num /= 10;
        m++;
    }
    ll a,b;
    a = n;
    b = n;
    for(int i= m; i > 0; i--){
        a = b/pow(26,i);
        b %= (ll)(pow(26,i));
        if(i == 1 && a != 0){
            cout << (char)('a' + (a-1)) << (char)('a' + (b-1));
        }else if(i == 1 && a == 0){
            cout << (char)('a' + (b-1));
        }else if(a != 0){
            cout << (char)('a' + (a-1));
        }
    }
    cout << endl;
    return 0;
}