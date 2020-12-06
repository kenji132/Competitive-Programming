#include <bits/stdc++.h>
using namespace std;
int main(){
    int A,B;
    cin >> A >> B;
    int payment=0;

    if(A<6){
        payment=0;
    }else if(A >= 6 && A < 13){
        payment = B/2;
    }else{
        payment = B;
    }

    cout << payment << endl;
}