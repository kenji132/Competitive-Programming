#include <bits/stdc++.h>
using namespace std;
int main(){
    string d;
    cin >> d;
    bool easy = true;
    for(int i = 1; i < d.length()+1; ++i){
        char c = d[i-1];
        if(i%2 == 1){
            if(c == 'R'){
            }else if(c == 'U'){
            }else if(c == 'D'){
            }else{
                easy = false;
            }
        }else if(i%2 == 0){
            if(c == 'L'){
            }else if(c == 'U'){
            }else if(c == 'D'){
            }else{
                easy = false;
            }
        }
    }
    if(easy){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}