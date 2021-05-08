#include <bits/stdc++.h>
using namespace std;

int main(){
  int x;
  cin >> x;
  if(x % 100 == 0){
    x/=100;
  }else{
    x/=100;
    x++;
  }
  cout << x << endl;
}