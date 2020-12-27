#include <bits/stdc++.h>
using namespace std;
int main(){
    long long int a, b, k;
    cin >> a >> b >> k;

    if(a + b <= k){
        a = 0;
        b = 0;
    }else if(a <= k){
        b -= k - a;
        a = 0;
    }else if(a > k){
        a -= k;
    }
    cout << a << endl;
    cout << b << endl;
}