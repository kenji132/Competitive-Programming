#include <bits/stdc++.h>
using namespace std;
int main(){
    int x,y;
    cin >> x >> y;
    bool ok = false;
    if(x*2 > y || y > x*4){
        ok = false;
    }else{
        for(int i = 0; i < x+1; i++){
            int u = i*4+(x-i)*2;
            if(u == y){
                ok = true;
                break;
            }
        }
    }
    if(ok){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}