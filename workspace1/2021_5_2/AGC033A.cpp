#include <bits/stdc++.h>
using namespace std;

const int dx[4] ={1, 0, -1, 0};
const int dy[4] ={0, 1, 0, -1};

int main(){
  int H,W;
  cin >> H >> W;
  vector<vector<char>> field(H, vector<char> (W));
  vector<vector<int>> dist(H, vector<int>(W, -1));
  queue<pair<int, int>> que;
  vector<vector<int>> seen(H, vector<int> (W));
  for (int i = 0; i < H; i++){
    for(int j = 0; j < W; j++){
      cin >> field[i][j];
      if(field[i][j] == '#'){
        dist[i][j] = 0;
        que.push({i,j});
        seen[i][j] = 1;
      }
    }
  }

  while(!que.empty()){
    int x,y;
    x = que.front().second;
    y = que.front().first;
    que.pop();

    for(int i = 0; i < 4; i++){
      int ny = y + dy[i];
      int nx = x + dx[i];
      if(ny >= H || nx >= W || nx < 0 || ny < 0) continue;
      if(field[ny][nx] == '#') continue;
      if(seen[ny][nx]) continue;
      que.push(make_pair(ny,nx));
      dist[ny][nx] = dist[y][x] + 1;
      seen[ny][nx] = 1;
    }
  }

  int ans = 0;
  for(int i = 0; i < H; i++){
    for(int j = 0; j < W; j++){
      ans = max(ans,dist[i][j]);
    }
  }

  cout << ans << endl;
}