#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  string s,new_s;
  cin >> s;
  int q;
  cin >> q;
  for(int i = 0; i < q; i++){
    int t,a,b;
    cin >> t >> a >> b;
    if(t == 1){
      char sa,sb;
      a--;
      b--;
      sa = s[a];
      sb = s[b];
      s[b] = sa;
      s[a] = sb;
    }else if(t == 2){
      new_s = s;
      string s1 = s.substr(0, n);
      string s2 = s.substr(n, n);

      new_s = s2+s1;
      // for(int i = 0; i < 2*n; i++){
      //   new_s[(i+n)%(2*n)] = s[i];
      // }
      s = new_s;
    }
  }
  cout << s << endl;
}