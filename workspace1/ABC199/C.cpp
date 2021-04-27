#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  string s;
  cin >> s;
  int q;
  cin >> q;
  string s1 = s.substr(0, n);
  string s2 = s.substr(n, n);
  for(int i = 0; i < q; i++){
    int t,a,b;
    cin >> t >> a >> b;
    a--;
    b--;
    if(t == 2){
      swap(s1,s2);
    }else if(a < n && b < n){
      swap(s1[a],s1[b]);
    }else if(a < n){
      swap(s1[a], s2[b-n]);
    }else{
      swap(s2[a-n], s2[b-n]);
    }
  }
  cout << s1 + s2 << endl;
}