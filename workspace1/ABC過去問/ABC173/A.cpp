#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int m = n%1000;
    if(m == 0){
        cout << 0 << endl;
    }else{
        cout << 1000-m << endl;
    }
}