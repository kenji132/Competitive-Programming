#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin >> n >> k;
    vector<long long> h;
    for(int i = 0; i < n; ++i){
        long long a;
        cin >> a;
        a = -a;
        h.push_back(a);
    }
    sort(h.begin(), h.end());
    long long ans = 0;
    for(int i = k; i < n; ++i){
        ans -= h[i];
    }
    cout << ans << endl;
}