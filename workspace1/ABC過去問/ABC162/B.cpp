#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ll n;
    cin >> n;
    ll sum = 0;
    sum = (1+n)*n/2;
    ll sum3 = 0;
    if(n/3 <= 1){
        sum3 = 3*(n/3);
    }else{
        sum3 = ((n/3)*3+3)*(n/3)/2;
    }
    ll sum5 = 0;
    if(n/5 <= 1){
        sum5 = 5*(n/5);
    }else{
        sum5 = ((n/5)*5+5)*(n/5)/2;
    }
    ll sum15 = 0;
    if(n/15 <= 1){
        sum15 = 15*(n/15);
    }else{
        sum15 = ((n/15)*15+15)*(n/15)/2;
    }
    ll ans = sum - sum3 - sum5 + sum15; 
    cout << ans << endl;
    return 0;
}