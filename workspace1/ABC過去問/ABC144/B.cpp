#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    bool ok = false;
    for(int i = 1; i < 10; ++i){
        for(int j = 1; j < 10; ++j){
            if(n==i*j){
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