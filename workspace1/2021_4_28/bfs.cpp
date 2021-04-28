#include <bits/stdc++.h>
using namespace std;

int main(){
  int N,M;
  cin >> N >> M;
  vector<vector<int>> G(N);
  for(int i = 0; i < M; i++){
    int a,b;
    cin >> a >> b;
    G[a].push_back(b);
    G[b].push_back(a);
  }

  vector<int> dist(N, -1);
  queue<int> que;

  dist[0] = 0;
  que.push(0);

  while(!que.empty()){
    int v = que.front();
    que.pop();

    for(auto new_v :G[v]){
      if(dist[new_v] != -1) continue;

      dist[new_v] = dist[v]+1;
      que.push(new_v);
    }
  }


  for(int v = 1; v < N; v++) cout << v << ": " << dist[v] << endl;

}