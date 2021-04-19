#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
  string s;
  cin >> s;
  int ans = 1000;
  for(int bit = 0; bit < (1 << 3 ); bit++){
    int sum = s[0] - '0';
    for(int i = 1; i < 4; i++){
      if(bit & (1 << i-1)){
        sum += s[i] - '0';
      }else{
        sum -= s[i] - '0';
      }
    }
    if(sum == 7){
      for(int i = 0; i < 3; i++){
        cout << s[i];
        if(bit & (1 << i)){
          cout << '+';
        }else{
          cout << '-';
        }
      }
      cout << s[3] << "=7" << endl;
      break;
    }
}
}