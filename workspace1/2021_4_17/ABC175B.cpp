#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
  int n;
  cin >> n;
  vector<int> l(n);
  for(int i = 0; i < n; i++){
    cin >> l[i];
  }
  int ans = 0;
  for(int i = 0; i < n; i++){
    for(int j = i+1; j < n; j++){
      for(int k = j+1; k < n; k++){
        if(i < j && j < k){
          if(l[i] == l[j] || l[j] == l[k] || l[k] == l[i]) continue;
          int m = max({l[i],l[j],l[k]});
          if(m < (ll)l[i]+l[j]+l[k]-m) ans++;
        }
      }
    }
  }
  cout << ans << endl;
  return 0;
}