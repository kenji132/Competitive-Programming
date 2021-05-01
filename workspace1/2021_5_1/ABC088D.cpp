#include <bits/stdc++.h>
using namespace std;

const int dx[4] ={1, 0, -1, 0};
const int dy[4] ={0, 1, 0, -1};

int main(){
  int H,W;
  cin >> H >> W;
  int total = H*W;
  vector<string> field(H);
  for(int i = 0; i < H; i++){
    cin >> field[i];
  }
  int cnt = 0; //#カウント
  for(int i = 0; i < H; i++){
    for(int j = 0; j < W; j++){
      if(field[i][j] == '.') cnt++;
    }
  }

  vector<vector<int>> dist(H, vector<int>(W,-1));
  dist[0][0] = 1;

  queue<pair<int, int>> que;
  que.push({0,0});

  vector<vector<int>> seen(H, vector<int>(W));
  seen[0][0] = 1;
  
  while(!que.empty()){
    int y,x;
    x = que.front().second;
    y = que.front().first;
    que.pop();

    for(int i = 0; i < 4; i++){
      int ny = y + dy[i];
      int nx = x + dx[i];
      if(ny >= H || nx >= W || nx < 0 || ny < 0 ) continue;
      if(field[ny][nx] == '#') continue;
      if(seen[ny][nx]) continue;
      que.push(make_pair(ny,nx));
      dist[ny][nx] = dist[y][x] + 1;
      seen[ny][nx] = 1;
    }
  }
  if(dist[H-1][W-1] == -1) cout<< "-1" << endl;
  else cout << cnt - dist[H-1][W-1] << endl;
  return 0;
}