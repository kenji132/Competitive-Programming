#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int ans = 0;
    if(n%2 == 0){
        ans = n / 2;
    }else{
        ans = n / 2 + 1;
    }
    cout << ans << endl;
}