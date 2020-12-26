#include <bits/stdc++.h>
using namespace std;

int g[15][15];
int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
            g[i][j] = -1;
        }
    }
    for(int i = 0; i < n; ++i){
        int s;
        cin >> s;
        for(int j = 0; j < s; j++){
            int a,b;
            cin >> a >> b;
            a--;
            g[i][a] = b;
        }
    }
    int cnt = 0;

    for (int i = 0; i < (1<<n); ++i){
        vector<int> d(n);
        for(int j = 0; j < n; ++j){
            if(i >> j &1){
                d[j] =1;
            }
        }
        bool ok = true;
        for(int j = 0; j < n; ++j){
            if(d[j]){
                for(int k = 0; k < n; ++k){
                    if(g[j][k] == -1){
                        continue;
                    }
                    if(g[j][k] != d[k]){
                        ok = false;
                    }
                }
            }
        }

        if(ok){
            cnt = max(cnt, __builtin_popcount(i));
        }
    }
    cout << cnt << endl;
    return 0;
    
}