#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
  int n;
  cin >> n;
  vector<ll> d(n);
  vector<ll> a(200);
  for(int i = 0; i < n; i++){
    cin >> d[i];
    a[d[i]%200]++;
  }
  ll ans = 0;
  for(int i = 0; i < 200; i++){
    ans += a[i]*(a[i]-1)/2;
  }
  
  cout << ans << endl;
  return 0;
}