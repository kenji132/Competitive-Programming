#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin >> n >> m;
    vector<int> h(n);
    for(int i = 0; i < n; i++){
        cin >> h[i];
    }
    vector<bool> ok(n,true);
    for(int i = 0; i < m; ++i){
        int s,g;
        cin >> s >> g;
        s--;
        g--;
        if(h[s] <= h[g]){
            ok[s] = false;
        }
        if(h[g] <= h[s]){
            ok[g] = false;
        }
    }
    int ans = 0;
    for(int i = 0; i < n; ++i){
        if(ok[i]){
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}