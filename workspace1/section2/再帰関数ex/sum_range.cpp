#include <bits/stdc++.h>
using namespace std;

int sum_range(int a, int b){
    if(a == b){
        return a;
    }
    return sum_range(a,b-1)+b;
}

int main(){
    int a,b;
    cin >> a >> b;
    cout << sum_range(a,b) << endl;
}