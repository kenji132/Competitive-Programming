#include <bits/stdc++.h>
using namespace std;

const int dx[4] ={1, 0, -1, 0};
const int dy[4] ={0, 1, 0, -1};

bool seen[10][10];
void dfs(int h, int w, vector<string> F){ //つながってるところを全てseenで印付ける
  seen[h][w] = true;

  for(int dir = 0; dir < 4; dir++){
    int nh = h + dx[dir];
    int nw = w + dy[dir];
    if(nh < 0 || nw < 0 || nh >= 10 || nw >= 10) continue;
    if(F[nh][nw] == 'x') continue;
    if(seen[nh][nw]) continue;
    dfs(nh, nw, F);
  }
}

int main(){
  vector<string> field(10);
  for(int i = 0; i < 10; i++){
    cin >> field[i];
  }
  for(int i = 0; i < 10; ++i){
    for(int j = 0; j < 10; ++j){
      memset(seen, false, sizeof(seen));
      vector<string> field2 = field;
      field2[i][j] = 'o';
      dfs(i,j,field2);
      bool ok = true;
      for(int a = 0; a < 10; ++a){
        for(int b = 0; b < 10; ++b){
          if(field2[a][b] == 'o' && !seen[a][b]) ok = false;
          //oだが、seenで印付けされてないところがある場合を除く
        }
      }
      if (ok) {
        cout << "YES" << endl;
        return 0;
      }
    }
  }
  cout << "NO" << endl;
  return 0;
}