#include <bits/stdc++.h>
using namespace std;

int main(){
  string str;
  cin >> str;
  int n = str.size();
  deque<char> T;
  bool rev = false;
  for(int i = 0; i < n; i++){
    if(str[i] == 'R'){
      rev ^= 1;
    }else if(rev){
      T.push_front(str[i]);
    }else{
      T.push_back(str[i]);
    }
  }
  if(rev) reverse(T.begin(), T.end());
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