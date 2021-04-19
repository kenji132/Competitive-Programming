#include <bits/stdc++.h>
using namespace std;

bool is_over(int sum, int max){
  if(sum >= max){
    return true;
  }else{
    return false;
  };

}

int main(){
  int d,g;
  cin >> d >> g;
  vector<int> p,c;
  for(int i = 0; i < d; i++){
    int a = 0, b = 0;
    cin >> a >> b;
    p.push_back(a);
    c.push_back(b);
  }
  int m = 100000;
  for(int bit = 0; bit < (1 << d ); bit++){
    int sum = 0;
    int cnt = 0;
    for(int i = d-1; i >= 0; --i){
      if(bit & (1 << i)){
        for(int j = 0; j < p[i]; j++){
          cnt++;
          sum += (i+1)*100;
          if(sum >= g){
            m = min(m,cnt);
          };
        }
        sum += c[i];
        if(sum >= g){
          m = min(m,cnt);
        }
      }
    }
  }
  cout << m << endl;
}