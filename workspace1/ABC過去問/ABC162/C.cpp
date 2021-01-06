#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ll n;
    cin >> n;
    ll sum = 0;
    ll cnt = 0;
    vector<int> v(n+1);
    for(int i = n; i > 0; i--){
        ll m = n/i;
        cnt += pow(m,3);
        ll x = pow(m,3);
        if(m >= 2){
            for(int j = 2; j < m+1; j++){
                cnt -= v[j*i];
                x -= v[j*i];
            }
        }
        sum += x*i;
        v[i] = x;
    }
    ll ans = (pow(n,3) - cnt) + sum;
    cout << ans << endl;
    return 0;
}