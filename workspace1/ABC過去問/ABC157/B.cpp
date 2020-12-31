#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<int>> b(3, vector<int>(3));
    for(int i=0; i < 3; i++){
        for(int j=0; j < 3; j++){
            int a;
            cin >> a;
            b[i][j] = a;
        }
    }
    int n;
    cin >> n;
    for(int i=0; i < n; i++){
        int x;
        cin >> x;
        for(int j=0; j < 3; j++){
            for(int k=0; k < 3; k++){
                if(b[j][k] == x){
                    b[j][k] = 0;
                }
            }
        }
    }
    bool ok = false;
    for(int i=0; i < 3; i++){
        if(b[i][0] == 0 && b[i][1] == 0 && b[i][2] == 0){
            ok = true;
        }else if(b[0][i] == 0 && b[1][i] == 0 && b[2][i] == 0){
            ok = true;
        }
    }
    if(b[1][1] == 0 && b[2][2] == 0 && b[0][0] == 0){
        ok = true;
    }else if(b[0][2] == 0 && b[1][1] == 0 && b[2][0] == 0){
        ok = true;
    }
    if(ok){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}