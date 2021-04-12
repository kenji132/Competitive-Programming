#include <bits/stdc++.h>
using namespace std;

bool isKaibun(string s){
  string rs = s;
  reverse(rs.begin(), rs.end());
  if(rs == s){
    return true;
  }else{
    return false;
  }
}

int main(){
  int n;
  cin >> n;
  if(n == 0){
    cout << "Yes" << endl;
    return 0;
  }
  while(n%10 == 0){
    n/=10;
  }
  if(isKaibun(to_string(n))){
    cout << "Yes" << endl;
  }else{
    cout << "No" << endl;
  }
  return 0;
}