#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
  string s;
  cin >> s;
  int n;
  n = s.length();
  ll ans = 0;
  for(int bit = 0; bit < (1 << (n-1)); bit++ ){
    ll tmp = 0;
    for(int i = 0; i < n-1; i++){
      tmp *= 10;
      tmp += s[i] - '0';
      if(bit & (1 << i)){
        ans += tmp;
        tmp = 0;
      }
    }
    tmp *= 10;
    tmp += s.back() - '0';
    ans += tmp;
  }
  cout << ans << endl;

}