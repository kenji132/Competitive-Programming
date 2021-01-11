#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    int n;
    cin >> n;
    ll ans = 1;
    vector<ll> v;
    for(int i = 0; i < n; i++){
        ll m;
        cin >> m;
        v.push_back(m);
    }
    sort(v.begin(), v.end());
    if (v.at(0) == 0) {
        cout << 0 << endl;
        return 0;
    }
    for(int i = 0; i < n; i++){
        if(ans > 1000000000000000000 / v[i]){
            cout << -1 << endl;
            return 0;
        }
        ans *= v[i];
    }
    cout << ans << endl;
}