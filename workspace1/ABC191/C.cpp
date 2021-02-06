#include <bits/stdc++.h>
using namespace std;

int main(){
    int h,w;
    cin >> h >> w;
    vector<vector<char>> data(h, vector<char>(w));
    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            cin >> data.at(i).at(j);
        }
    }
    int cnt = 0;

    for(int i = 0; i < h-1; i++){
        for(int j = 0; j < w-1; j++){
            int ct = 0;
            if(data.at(i).at(j)=='#') ++ct;
            if(data.at(i+1).at(j)=='#') ++ct;
            if(data.at(i).at(j+1)=='#') ++ct;
            if(data.at(i+1).at(j+1)=='#') ++ct;
            if(ct==1||ct==3) ++cnt;
        }
    }
    cout << cnt << endl;

}