#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  vector<int> x(n),y(n);
  for(int i = 0; i < n; i++){
    cin >> x[i] >> y[i];
  }

  int z = 0;
  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      z = max((x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j]), z);
    }
  }

  cout << sqrt(z) << endl;
  return 0;
}