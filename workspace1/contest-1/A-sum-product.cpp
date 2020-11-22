#include <bits/stdc++.h>
using namespace std;

int main(){
    int S,P;
    cin >> S >> P;

    if(S<=0||P<=0){
        cout << "No" << endl;
    }
    S*=S;
    int X;
    X=sqrt(S-2*P);
    cout << X << endl;


}