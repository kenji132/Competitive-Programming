#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    cin >> a >> b;

    int ans = 0;
    int c;
    ans = (a + b)/2;
    c = (a + b)%2;

    if(c == 0){
        cout << ans << endl;
    }else{
        cout << "IMPOSSIBLE" << endl;
    }

}