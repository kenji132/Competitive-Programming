#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
  ll r,x,y;
  cin >> r >> x >> y;
  ll d2 = x*x+y*y;
  bool ok = true;
  ll ans = 1;
  while(ok){
    if(r*r*ans*ans >= d2) break;
    ans++;
  }
  if(ans == 1){
    if(r*r != d2){
      ans = 2;
    }
  }
  cout << ans << endl;
  return 0;
}