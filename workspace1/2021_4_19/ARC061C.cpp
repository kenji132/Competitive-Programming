#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
  string s;
  cin >> s;
  int n = s.length();
  ll ans = 0;
  for(int bit = 0; bit < (1 << (n-1) ); bit++){
    ll sum = 0;
    for(int i = 0; i < n-1; i++){
      sum *= 10;
      sum += s[i] -'0';
      if(bit & (1 << i)){
        ans += sum;
        sum = 0;
      }
    }
    sum *= 10;
    sum += s.back() -'0';
    ans += sum;
  }
  cout << ans << endl;
}