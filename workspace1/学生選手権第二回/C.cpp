#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool is_found(int a, int b, int z){
  if(a <= z && z <= b){
    return true;
  }else{
    return false;
  }
}

bool is_integer( double x ){
  return std::floor(x)==x;
}

int main(){
  int a,b;
  cin >> a >> b;
  int z = b-a;
  bool ok = true;
  while(ok){
    int ans = ((a/z)+1)*z;
    if(is_integer((double)a/z)){
    }else{
      ans += z;
    }
    if(is_found(a,b,ans)){
      cout << z << endl;
      ok = false;
    }else{
      z--;
    }
  }

}