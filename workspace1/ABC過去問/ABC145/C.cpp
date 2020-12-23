#include <bits/stdc++.h>
using namespace std;
int main(){
    double n;
    cin >> n;
    vector<double> x;
    vector<double> y;
    for(int i = 0; i < n; ++i){
        double a,b;
        cin >> a >> b;
        x.push_back(a);
        y.push_back(b);
    }

    double k = 1;
    double ans = 0;
    for(int i = 0; i < n; ++i){
        k *= i+1;
        for(int j = i+1; j < n; ++j){
            ans += sqrt(pow(x[i] - x[j], 2) + pow(y[j] - y[i], 2));
        }
    }
    ans *= (n-1)/(n*(n-1)/2);
    cout << fixed << setprecision(10) << ans << endl;
}