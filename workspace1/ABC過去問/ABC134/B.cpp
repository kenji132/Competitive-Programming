#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,d;
    cin >> n >> d;
    int a = n / (2 * d + 1);
    int b = n % (2 * d + 1);
    if(b == 0){
        cout << a << endl;
    }else{
        cout << a+1 << endl;
    }
}