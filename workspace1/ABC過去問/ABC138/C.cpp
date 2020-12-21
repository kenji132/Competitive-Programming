#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<double> v;
    for(int i = 0; i < n; ++i){
        double a;
        cin >> a;
        v.push_back(a);
    }
    sort(v.begin(), v.end());
    for(int i = 0; i < n; ++i){
        v[i+1] = (v[i] + v[i+1])/2;
    }
    cout << v[n-1] << endl;
}