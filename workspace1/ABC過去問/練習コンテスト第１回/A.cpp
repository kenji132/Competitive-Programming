#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin >> a >> b;
    int ans = 0;
    if(a < 0 && b < 0){
        ans = -a-(-b);
    }else if(a < 0 && b > 0){
        ans = b-a-1;
    }else{
        ans = b-a;
    }
    cout << ans << endl;
}