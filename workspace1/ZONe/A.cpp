#include <bits/stdc++.h>
using namespace std;

int main(){
  string str;
  cin >> str;
  int n = str.size();
  int cnt = 0;
  for(int i = 0; i < n ; i++){
    if(str[i] == 'Z' ){
      if(str[i+1] == 'O'){
        if(str[i+2] == 'N'){
          if(str[i+3] == 'e'){
            cnt++;
          }
        }
      }
    }
  }
  cout << cnt << endl;
}