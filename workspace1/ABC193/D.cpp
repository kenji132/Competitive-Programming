#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int f(string s){
  vector<int> a(10);
  for(char c : s) a[c - '0']++;
  int res = 0;
  for(int i = 1; i < 10; i++){
    int x = 1;
    for(int j = 0; j < a[i]; j++){
      x *= 10;
    }
    res += x*i;
  }
  return res;
}

int main(){
  int k;
  cin >> k;
  string s,t;
  cin >> s >> t;
  vector<int> c(10,k);
  c[0] = 0;
  for(int i = 0; i < 4; i++) c[s[i]-'0']--;//カードを使う
  for(int i = 0; i < 4; i++) c[t[i]-'0']--;//カードを使う
  ll cnt = 0;
  for(int a = 1; a <= 9; a++){
    for(int b = 1; b <= 9; b++){
      s[4]=a+'0';
      t[4]=b+'0';
      if(f(s) > f(t)){
        if(a == b) cnt += (ll)c[a]*(c[a]-1);
        else cnt += (ll)c[a]*c[b];
      }
    }
  }
  ll C = 0;
  for(int i = 0; i < 10; i++) C += c[i];
  ll tot = C*(C-1);
  double ans = (double)cnt/tot;
  printf("%.10f\n",ans);
  return 0;

}