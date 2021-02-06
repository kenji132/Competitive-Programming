#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> v;
    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        v.push_back(a);
    }
    int minv = v[0];
    int maxv = -2000000000;
    int ans = 0;
    for(int i = 1; i < n; i++){
        maxv = max(maxv, v[i]-minv);
        minv = min(minv, v[i]);
    }

    cout << maxv << endl;
}