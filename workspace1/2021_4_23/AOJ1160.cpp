#include <bits/stdc++.h>
using namespace std;

const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

int H,W;
vector<string> field;
int cnt = 0;
bool seen[100][100];
bool ok;
void dfs(int h, int w) {
  for(int dir = 0; dir < 4; dir++){
    int nw = w + dx[dir];
    int nh = h + dy[dir];
    if(nh < 0 || nw < 0 || nh >= H || nw >= W) continue;
    if(field[nh][nw] == '0'){
      cnt++;
      continue;
    }
    if(seen[nh][nw]){
      ok = true;
    }else{
      seen[h][w] = true;
      dfs(nh, nw);
    }
  }
}

int main(){
  cin >> W >> H;
  for(int i = 0; i < H; i++){
    string str;
    cin >> str;
    field.push_back(str);
  }

  int ans = 0;
  for(int i = 0; i < H; i++){
    for(int j = 0; j < W; j++){
      ok = false;
      dfs(i, j);
      if(ok){
        ans++;
      }
    }
  }
  cout << ans << endl;
  return 0;
}