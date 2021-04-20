#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,m;
  cin >> n >> m;
  vector<vector<int>> G(n,vector<int>(n));
  for(int i = 0; i < m; i++){
    int x,y;
    cin >> x >> y;
    x--;
    y--;
    G[x][y]=G[y][x]=1;
  }
  int ans = 1;
  for(int bit = 0; bit < (1 << n ); bit++){
    int t = bitset<64>(bit).count();
    bool ok = true;
    for(int i = 0; i < n; i++){
      for(int j = 0; j < i; j++){
        if(bit & (1 << i) && bit & (1 << j) && !G[i][j]){
          ok = false;
        }
      }
    }
    if(ok){
      ans = max(ans,t);
    }
  }
  cout << ans << endl;
}