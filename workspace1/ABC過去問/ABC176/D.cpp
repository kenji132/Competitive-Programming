#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (n); ++i)
using namespace std;

int main(){
    int h,w;
    cin >> h >> w;
    int ch,cw,dh,dw;
    cin >> ch >> cw >> dh >> dw;
    ch--;
    cw--;
    dh--;
    dw--;
    vector<vector<string>> maze(h, vector<string>(w));
    rep(i,h)rep(j,w){
        cin >> maze[i][j];
    }
    if(cw < dw){
        if(maze[ch][cw+1] == '.'){
            cw += 1;
        }
    }
}