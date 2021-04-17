#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool is_integer( double x ){
  return std::floor(x)==x;
}

int main(){
  double x,y,z;
  cin >> x >> y >> z;
  double m = y/x*z;
  if(is_integer(m)){
    cout << m-1 << endl;
  }else{
    cout << floor(m) << endl;
  }
  return 0;
}