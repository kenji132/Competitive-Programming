#include <bits/stdc++.h>
using namespace std;

const int dx[4] ={1, 0, -1, 0};
const int dy[4] ={0, 1, 0, -1};

int main(){
  int H,W;
  cin >> H >> W;
  vector<vector<char>> field(H, vector<char> (W));
  vector<vector<int>> dist(H, vector<int>(W, 100));

  queue<pair<int, int>> que;
  // vector<vector<int>> seen(H, vector<int> (W));
  int sy,sx,gx,gy;
  for(int i = 0; i < H; i++){
    for(int j = 0; j < W; j++){
      cin >> field[i][j];
      if(field[i][j] == 's'){
        sy = i;
        sx = j;
      }
      if(field[i][j] == 'g'){
        gx = j;
        gy = i;
      }
    }
  }

  que.push(make_pair(sy,sx));
  dist[sy][sx] = 0;
  // seen[sy][sx] = 1;

  while(!que.empty()){ 
    int x,y;
    x = que.front().second;
    y = que.front().first;
    que.pop();
    for(int i = 0; i < 4; i ++){
      int nx = x + dx[i]; 
      int ny = y + dy[i];
      if(nx >= W || ny >= H || nx < 0 || ny < 0) continue;
      // if(seen[ny][nx]) continue;
      if(field[ny][nx] == '#'){
        if(dist[ny][nx] > dist[y][x] + 1){
          dist[ny][nx] = dist[y][x]+1;
          que.push(make_pair(ny,nx));
        }
          // seen[ny][nx] = 1;
      // cout << 'a' << ny << ' ' << nx << endl;
      }else{
        if(dist[ny][nx] > dist[y][x]){
          dist[ny][nx] = dist[y][x];
          que.push(make_pair(ny,nx));
        }
        // seen[ny][nx] = 1;
      }
    }
  }

  // for(int i = 0; i < H; i++){
  //   for(int j = 0; j < W; j++){
  //     cout << dist[i][j] << endl;
  //   }
  // }

  if(dist[gy][gx] <= 2){
    cout << "YES" << endl;
  }else{
    cout << "NO" << endl;
  }
  return 0;
}