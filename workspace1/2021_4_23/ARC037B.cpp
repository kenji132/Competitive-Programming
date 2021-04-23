#include <bits/stdc++.h>
using namespace std;

vector<bool> seen;
vector<vector<int>> G(110);
bool circle;
void dfs(int v, int prev){
  for(auto next_v : G[v]){
    if(next_v == prev) continue;
    if(seen[next_v]){
      circle = true;
    }else{
      seen[next_v] = true;
      dfs(next_v, v);
    }
  }
}


int main(){
  int N,M;
  cin >> N >> M;
  G.resize(N);
  seen.resize(N, false);
  for(int i = 0; i < M; i++){
    int a,b;
    cin >> a >> b;
    a--;
    b--;
    G[a].push_back(b);
    G[b].push_back(a);
  }
  int ans = 0;
  for(int s = 0; s < N; s++){
    circle = false;
    if(seen[s]) continue;
    seen[s] = true;
    dfs(s, -1);
    if(!circle) ans++;
  }
  cout << ans << endl;
  return 0;
}