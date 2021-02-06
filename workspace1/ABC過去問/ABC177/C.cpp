#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    int n;
    cin >> n;
    vector<ll> v;

    for(int i = 0; i < n; i++){
        ll x;
        cin >> x;
        v.push_back(x);
    }
    ll ans = 0;
    ll x = 0;

    for(int i = 0; i < n; i++){
        ans = (ans + v[i]*x)%1000000007;
        x = (x+v[i])%1000000007;
    }
    cout << ans << endl;

}