#include <bits/stdc++.h>
using namespace std;

int main(){
    double A,B,C;
    cin >> A >> B >> C;

    // if(A < 100 || B < 100 || C < 100){
    //     int r;
    //     r = rand()%3;
    //     if(r==0){
    //         A++;
    //     }else if(r==1){
    //         B++;
    //     }else{
    //         C++;
    //     }
    // }
    double a,b,c;
    a = 100-A;
    b = 100-B;
    c = 100-C;
    double ans;
    ans = a * A / ( A + B + C ) + b * B / ( A + B + C ) + c * C / ( A + B + C );
    cout << ans << endl;
}