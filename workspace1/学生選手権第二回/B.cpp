#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
  int n,m;
  cin >> n >> m;
  vector<int> a(n),b(m);
  for(int i = 0; i < n; i++){
    cin >> a[i];
  }
  for(int i = 0; i < m; i++){
    cin >> b[i];
  }
  bool aok = false;
  bool bok = false;
  for(int i = 0,j = 0; i < n || j < m; i++,j++){
    if(bok){
      for(int ni = i; ni < n; ni++){
        cout << a[ni] << endl;
      }
      break;
    }else if(aok){
      for(int nj = j; nj < m; nj++){
        cout << b[nj] << endl;
      }
      break;
    }else{
      if(a[i] == b[j]){
        if(j == m-1){
          bok = true;
        }else if(i == n-1){
          aok = true;
        }
        continue;
      }else if(a[i] > b[j]){
        cout << b[j] << endl;
        if(j == m-1){
          bok = true;
        }
        i--;
      }else if(a[i] < b[j]){
        cout << a[i] << endl;
        if(i == n-1){
          aok = true;
        }
        j--;
      }
    }
  }

}