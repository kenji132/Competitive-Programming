#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
  ll N;
  int K;
  cin >> N >> K;
  for(int i = 0; i < K; i++){
    if(N%200 == 0){
      N/=200;
    }else{
      N = N * 1000 + 200;
    }
  }

  cout << N << endl;
  return 0;
}