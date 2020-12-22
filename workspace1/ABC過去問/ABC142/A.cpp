#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    double n1 = n;
    double ans=0;
    if(n == 1){
        ans = 1;
        cout << ans << endl;
    }else if(n%2 == 0){
        ans = (n1/2)/n1;
        cout << ans << endl;
    }else if(n%2 == 1){
        ans = ((n1-1)/2+1)/n1;
        cout << ans << endl;
    }
}