#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  vector<int> A,B;
  for(int i = 0; i < n; i++){
    int a;
    cin >> a;
    A.push_back(a);
  }
  for(int i = 0; i < n; i++){
    int b;
    cin >> b;
    B.push_back(b);
  }
  sort(A.begin(), A.end());
  sort(B.begin(), B.end());

  if(A[n-1] > B[0]){
    cout << 0 << endl;
  }else{
    cout << B[0] - A[n-1]  + 1 << endl;
  }
  return 0;
}