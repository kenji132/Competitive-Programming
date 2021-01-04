#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int a,b;
    cin >> a >> b;
    int a1 = (a / 100)+((a - a/100*100)/10)+(a-a/100*100-(a - a/100*100)/10*10);
    int b1 = (b / 100)+((b - b/100*100)/10)+(b-b/100*100-(b - b/100*100)/10*10);
    if(a1 >= b1){
        cout << a1 << endl;
    }else{
        cout << b1 << endl;
    }
    return 0;
}