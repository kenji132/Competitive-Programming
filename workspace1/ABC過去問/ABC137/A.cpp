#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    cin >> a >> b;
    int sum = a+b;
    int diff = a-b;
    int mul = a*b;
    int ans = 0;
    if(sum > diff){
        if(sum > mul){
            ans = sum;
        }else{
            ans = mul;
        }
    }else if(diff >mul){
        if(diff > sum){
            ans = diff;
        }else{
            ans = sum;
        }
    }else if(mul > diff){
        if(mul > sum){
            ans = mul;
        }else{
            ans = sum;
        }
    }

    cout << ans << endl;
}