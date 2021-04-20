#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  vector<int> t(n);
  for(int i = 0; i < n; i++){
    cin >> t[i];
  }
  int m = 100000;
  for(int bit = 0; bit < (1 << (n) ); bit++){
    int ans1 = 0; 
    int ans2 = 0; 
    int ans = 0;
    for(int i = 0; i < n; i++){
      if(bit & (1 << i)){
        ans1 += t[i];
      }else{
        ans2 += t[i];
      }
    }
    ans = max(ans1, ans2);
    m = min(m, ans);
  }
  cout << m << endl;
}