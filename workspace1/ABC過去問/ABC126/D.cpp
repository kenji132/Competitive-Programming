#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<vector<int>> to(n),cost(n);
    for(int i=0; i < n-1; ++i){
        int a,b,w;
        cin >> a >> b >> w;
        a--;
        b--;
        to[a].push_back(b);
        cost[a].push_back(w);
        to[b].push_back(a);
        cost[b].push_back(w);
    }
    vector<int> ans(n,-1);
    queue<int> q;
    ans[0] = 0;
    q.push(0);
    while(!q.empty()){
        int v = q.front();
        q.pop();
        for(int i=0; i < to[v].size(); ++i){
            int u = to[v][i];//vからuへ
            int w = cost[v][i];//vからuへの距離
            if(ans[u]!= -1){
                continue;
            }
            ans[u] = (ans[v] + w)%2;
            q.push(u);
        }
    }
    for (int x : ans) cout << x << '\n';
    return 0;
}