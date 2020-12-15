#include <bits/stdc++.h>
using namespace std;
    long long int gcd(long long int x, long long int y){
    if(x < y){
        swap(x, y);
    } 

    while (y > 0) {
        long long int r = x % y;
        x = y;
        y = r;
    }
    return x;
    }

int main(){
    long long int a,b,c,d;
    cin >> a >> b >> c >> d;
    long long int ans = 0;


    ans = b - a + 1;
    if(a%c == 0){
        ans--;
    }
    ans -= b / d - a / d;
    if(a % d == 0){
        ans--;
    }
    long long int cd = c * d / gcd(c, d);
    ans += b / cd - a / cd;
    if(a % cd == 0){
        ans++;
    }

    cout << ans << endl;

}