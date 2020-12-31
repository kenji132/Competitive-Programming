#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin >> n >> k;
    int cnt = 0;
    int k1 = 1;
    while(n >= k1){
        k1 *= k;
        cnt++;
    }
    cout << cnt << endl;
}