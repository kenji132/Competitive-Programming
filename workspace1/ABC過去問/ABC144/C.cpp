#include <bits/stdc++.h>
using namespace std;
int main(){
    long long int n;
    cin >> n;
    long long int s = sqrt(n);
    int p = 0;
    while(p == 0){
        if(n%s == 0){
            p = s;
        }else{
            s--;
        }
    }

    cout << s + n/s -2 << endl;
}