#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int ans = 0;
    while(n >= 500){
        n -= 500;
        ans += 1000;
    }
    while(n >= 5){
        n -= 5;
        ans += 5;
    }
    cout << ans << endl;
    return 0;
}