#include <bits/stdc++.h>
using namespace std;

int main(){
  int h,w,x,y;
  cin >> h >> w >> x >> y;
  x--;
  y--;
  vector<string> v;
  for(int i = 0; i < h; i++){
    string str;
    cin >> str;
    v.push_back(str);
  }
  int cnt1 = 0;
  int d_cnt1 = 0;
  bool visible1 = true;
  for(int j = 0; j < w; j++){
    if(v[x].at(j) == '.'){
      cnt1++;
    }else if(v[x].at(j) == '#' && j < y ){
      cnt1 = 0;
    }else if(v[x].at(j) == '#' && j > y){
      break;
    }
  }
  int cnt2 = 0;
  bool visible2 = true;
  for(int i = 0; i < h; i++){
    if(v[i].at(y) == '.'){
      cnt2++;
    }else if(v[i].at(y) == '#' && i < x){
      cnt2 = 0;
    }else if(v[i].at(y) == '#' && i > x){
      break;
    }
  }
  cout << cnt1 + cnt2 - 1 << endl;
}