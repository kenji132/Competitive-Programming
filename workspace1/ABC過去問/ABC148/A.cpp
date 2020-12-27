#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b,ans;
    cin >> a >> b;
    if(a == 1 && b == 2){
        ans = 3;
    }else if(a == 2 && b == 1){
        ans = 3;
    }else if(a == 1 && b == 3){
        ans = 2;
    }else if(a == 3 && b == 1 ){
        ans = 2;
    }else if(a == 2 && b == 3){
        ans = 1;
    }else if(a == 3 && b == 2){
        ans = 1;
    }
    cout << ans << endl;
}