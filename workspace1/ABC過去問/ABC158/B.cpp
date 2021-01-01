#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n,a,b;
    cin >> n >> a >> b;
    long long m = n / (a+b);
    long long l = min(n % (a+b),a);
    cout << m*a+l << endl;
}