#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ll n;
    cin >> n;
    ll r = sqrt(n);
    r++;
    set<ll> s;
    for(ll i = 2; i < r; i++){
        int m = 2;
        while(pow(i,m) <= n){
            s.insert(pow(i,m));
            m++;
        }
    }
    ll cnt = s.size();
    ll ans = n - cnt;
    cout << ans << endl;
}