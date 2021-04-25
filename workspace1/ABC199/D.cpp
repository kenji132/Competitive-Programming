#include <bits/stdc++.h>
using namespace std;

int N,M;
vector<vector<int>> G(110);
vector<bool> seen;
void dfs(vector<vector<int>> G, int v){
  seen[v] = true;
  int cnt = 0;
  for(auto next_v : G[v]){
    cnt++;
    if (seen[next_v]) continue; // next_v が探索済だったらスルー
    dfs(G,next_v);
  }
}

int main(){
  cin >> N >> M;
  for(int i = 0; i < M; i++){
    int a,b;
    cin >> a >> b;
    a--;
    b--;
    G[a].push_back(b);
    G[b].push_back(a);
  }
  for(int i = 0; i < N; i++){
    dfs(G,i);
  }
}