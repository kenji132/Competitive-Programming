#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,x,t;
    cin >> n >> x >> t;
    int ans;
    if(n%x == 0){
        ans = n/x*t;
    }else{
        ans = (n/x+1)*t;
    }
    cout << ans << endl;
}