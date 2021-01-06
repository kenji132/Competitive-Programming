#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    bool Tok = false;
    bool Aok = false;
    while(a > 0 || c > 0){
        c -= b;
        if(c <= 0){
            Tok = true;
            break;
        }
        a -= d;
        if(a <= 0){
            Aok = true;
            break;
        }
    }
    if(Tok){
        cout << "Yes" << endl;
    }else if(Aok){
        cout << "No" << endl;
    }

}