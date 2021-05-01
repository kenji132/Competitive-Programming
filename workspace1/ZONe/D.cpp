#include <bits/stdc++.h>
using namespace std;

int main(){
  string str;
  cin >> str;
  int n = str.size();
  vector<char> T;
  for(int i = 0; i < n; i++){
    if(str[i] == 'R'){
      reverse(T.begin(), T.end());
    }else{
      T.push_back(str[i]);
    }
  }
  string A;
  int N = T.size();
  for(int i = 0; i < N; i++){
    if(A.size() && A.back() == T[i]){
      A.pop_back();
    }else{
      A.push_back(T[i]);
    }
  }
  cout << A << endl;
}