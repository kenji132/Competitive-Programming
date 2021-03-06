#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  long long Tsum = 0;
  long long sum = 0;
  for(int i=0; i<n; i++){
    long long x;
    cin >> x;
    Tsum += pow(x,2);
    sum += x;
  }
  long long ans = n*Tsum-sum*sum;
  cout << ans << endl;
}