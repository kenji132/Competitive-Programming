#include <bits/stdc++.h>
using namespace std;
int main(){
    int N,M;
    
    vector<vector<int>> data(M, vector<int>(M));
    for(int i=1; i < (M+1); ++i){
        for(int j=0; j < (M+1); ++j){
            cin >> data[i][j];
        }
    }
    vector<int> p;
    for(int i=1; i < (M+1); ++i){
        cin >> p[i];
    }
}