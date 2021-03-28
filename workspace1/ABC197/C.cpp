#include <bits/stdc++.h>
using namespace std;
using ll = long long;


int main(){
  ll ans = 2e10;
  ll n;
  cin >> n;
  vector<ll> v;
  for(int i = 0; i < n; i++){
    ll x;
    cin >> x;
    v.push_back(x);
  }
  if (n == 1) ans = v[0];
  for(int bit = 1; bit < (1 << (n-1)); bit++){
    ll o = 0, x = 0;
    for(int i = 0; i < n; i++){
      o |= v[i];
      if(bit & (1 << i)){
        x ^= o;
        o = 0;
      }
    }
    x ^= o;
    ans = min(x,ans);
  }
  cout << ans << endl;
}