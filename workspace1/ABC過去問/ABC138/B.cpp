#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    double sum = 0;
    double ans = 0;
    for(int i = 0; i < n; ++i){
        double x;
        cin >> x;
        sum += 1/x;
    }
    ans = 1/sum;
    cout << fixed << setprecision(12) << ans << endl;
}