#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ll n,m,k;
    cin >> n >> m >> k;
    vector<ll> a,b;
    for(int i = 0; i < n; i++){
        ll x;
        cin >> x;
        a.push_back(x);
    }
    for(int i = 0; i < m; i++){
        ll x;
        cin >> x;
        b.push_back(x);
    }
    ll t = 0;
    for(int i = 0; i < m; i++){
        t += b[i];
    }
    ll j = m;
    ll ans = 0;
    for(int i = 0; i < n +1; ++i){
        while(j > 0 && t > k){
            --j;
            t -= b[j];
        }
        if(t > k){
            break;
        }
        ans = max(ans,i+j);
        if(i == n){
            break;
        }
        t += a[i];
    }
    cout << ans << endl;
}