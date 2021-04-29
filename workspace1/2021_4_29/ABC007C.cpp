#include <bits/stdc++.h>
using namespace std;

const int dx[4] ={1, 0, -1, 0};
const int dy[4] ={0, 1, 0, -1};

int main(){
  //グラフ入力
  int R,C;
  cin >> R >> C;
  int sy,sx,gy,gx;
  cin >> sy >> sx >> gy >> gx;
  sy--;sx--;gy--;gx--;
  vector<string> field(R);
  for(int y = 0; y < R; y++){
      cin >> field[y];
  }

  vector<vector<int>> dist(R, vector<int>(C));
  dist[sy][sx] = 0;

  queue<pair<int,int>> que;
  que.push(make_pair(sy, sx));

  vector<vector<int>> seen(R, vector<int>(C));
	seen[sy][sx]=1;

  while(!que.empty()){
    int y,x;
    y = que.front().first;
    x = que.front().second;
    que.pop();
    
    for(int i = 0; i < 4; i++){
      int ny = y + dy[i];
      int nx = x + dx[i];
      if(ny >= R || nx >= C || ny < 0 || nx < 0) continue;
      if(field[ny][nx] == '#') continue;
      if(seen[ny][nx]) continue;
      que.push(make_pair(ny, nx));
      dist[ny][nx] = dist[y][x] + 1;
      seen[ny][nx] = 1;
    }
  }
  cout << dist[gy][gx] << endl;
  return 0;

}