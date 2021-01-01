#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin >> a >> b;
    int ans = -1;
    for(int i = 1; i < 1001; ++i){
        int a1,b1;
        a1 = i*0.08;
        b1 = i*0.1;
        if(a1 == a && b1 == b){
            ans = i;
            break;
        }
    }
    cout << ans << endl;
}