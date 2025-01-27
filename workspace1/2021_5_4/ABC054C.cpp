#include <bits/stdc++.h>
using namespace std;

// vector<vector<int>> G;
// bool seen[8];

// void dfs( int v,  vector<vector<int>> G, int cnt){
//   seen[v] = true;
//   for(auto nv: G[v]){
//     int new_cnt = cnt+1;
//     if(seen[nv]) continue;
//     dfs(nv, G, cnt+1);
//   }
// }

// int main(){
//   int n,m;
//   cin >> n >> m;
//   vector<vector<int>> F(n);
//   for(int i = 0; i < m; i++){
//     int a,b;
//     cin >> a >> b;
//     a--;b--;
//     F[a].push_back(b);
//     F[b].push_back(a);
//   }
//   int ans = 0;
//   for(int i = 0; i < n; i++){
//     int cnt = 0;
//     dfs(i, F, cnt);
//     cout << cnt << endl;
//     if(cnt == n){
//       ans++;
//     }
//   }
//   cout << ans << endl;
//   return 0;
// }


const int nmax=8;
bool graph[nmax][nmax];

int dfs(int v,int N,bool visited[nmax]){

    bool all_visited=true;

    for(int i=0;i<N;++i){
        if(visited[i]==false)
            all_visited=false;
    }
    if(all_visited){
        return 1;
    }

    int ret=0;
    for(int i=0;i<N;++i){
        if(graph[v][i]==false) continue;
        if(visited[i]) continue;

        visited[i]=true;
        ret+=dfs(i,N,visited);
        visited[i]=false;
    }
    return ret;
}

int main(void){
    int N,M;
    cin >> N >> M;
    for(int i=0;i<M;++i){
        int A,B;
        cin >> A >> B;
        graph[A-1][B-1]=graph[B-1][A-1]=true;
    }

    bool visited[nmax];
    for(int i=0;i<N;++i){
        visited[i]=false;
    }
    visited[0]=true;
    cout << dfs(0,N,visited) << endl;
    return 0;
}