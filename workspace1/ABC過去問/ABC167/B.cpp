#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c,k;
    cin >> a >> b >> c >> k;
    int sum = 0;
    if(a < k){
        sum += a;
        if(c >= k - b - a){
            sum -= k-a-b;
        }
    }else{
        sum += k;
    }
    cout << sum << endl;
}