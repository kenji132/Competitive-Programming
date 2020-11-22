#include <bits/stdc++.h>
using namespace std;

int main(){
    int N,X;
    string S;
    cin >> N >> X;
    cin >> S;

    for (int i = 0; i < N; ++i){
        if(X == 0){
            if(S.at(i) == 'o'){
                X++;
            }else if(S.at(i) == 'x'){
            }
        }else{
            if(S.at(i) == 'o'){
                X++;
            }else if(S.at(i) == 'x'){
                X--;
            }
        }
    }
    cout << X << endl;
}