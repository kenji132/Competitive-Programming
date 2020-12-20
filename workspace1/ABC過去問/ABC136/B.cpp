#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int ans = 0;
    if(n < 10){
        ans = n;
        cout << ans << endl;
    }else if(n >= 10 && n < 100){
        ans = 9;
        cout << ans << endl;
    }else if(n >= 100 && n < 1000){
        ans = 9 + n - 99;
        cout << ans << endl;
    }else if(n >= 1000 && n < 10000){
        ans = 909;
        cout << ans << endl;
    }else if(n >= 10000 && n < 100000){
        ans = 909 + n - 9999;
        cout << ans << endl;
    }else if(n == 100000){
        ans = 90909;
        cout << ans << endl;
    }
}