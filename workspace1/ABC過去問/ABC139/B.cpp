#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    cin >> a >> b;
    int s = a-1;
    int cnt=0;
    int sum=1;

    while(b > sum){
        sum += a-1;
        cnt++;
    }
    
    cout << cnt << endl;
}