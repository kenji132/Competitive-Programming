#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    cin >> a >> b;
    int ans = a-2*b;
    if(ans >= 0){
        cout << ans << endl;
    }else if(ans < 0){
        cout << 0 << endl;
    }
}