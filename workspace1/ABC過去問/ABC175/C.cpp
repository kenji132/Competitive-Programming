#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ll x,k,d;
    cin >> x >> k >> d;
    if(x < 0){
        x *= -1;
    }
    ll ans;

    if(x/d > k){
        ans = x - k*d;
    }else{
        ll e = x/d;
        k -= e;
        x -= e*d;
        if(k%2 == 1){
            x = abs(x-d);
        }
        ans = x;
    }
    cout << ans << endl;
}