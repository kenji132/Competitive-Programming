#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  double D,H;
  cin >> N >> D >> H;
  vector<double> d(N),h(N);
  for(int i = 0; i < N; i++){
    cin >> d[i];
    cin >> h[i];
  }
  double ans = 9999999;
  int ansi;
  for(int i = 0; i < N; i++){
    double a = (h[i] - H)/(d[i] - D);
    if(a < ans){
      ans = a;
      ansi = i;
    }
  }
  double res = 0;
  if(d[ansi]*ans > h[ansi]){
    cout << res << endl;
  }else{
    res = h[ansi] - d[ansi]*ans;
    cout << res << endl;
  }
}