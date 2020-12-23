#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin >> a >> b;
    int ans = 0;
    if(a > 9 || b > 9){
        ans = -1;
    }else{
        ans = a*b;
    }
    cout << ans << endl;
}