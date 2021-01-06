#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ll n,k;
    cin >> n >> k;
    ll d = n%k;
    ll ans = min(k - d, d);
    cout << ans << endl;
    return 0;
}
