#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ll x;
    cin >> x;
    ll s = 100;
    ll cnt = 0;
    while(x > s){
        s += s/100;
        cnt++;
    }
    cout << cnt << endl;
    return 0;
}