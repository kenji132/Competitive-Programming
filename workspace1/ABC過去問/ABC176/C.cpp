#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main(){
    int n;
    cin >> n;
    vector<int> tall(n);
    ll ans = 0;
    rep(i,n) cin >> tall[i];
    for(int i = 1; i < n; ++i){
        if(tall[i] < tall[i-1]){
            ans += tall[i-1] - tall[i];
            tall[i] = tall[i-1];
        }
    }
    cout << ans << endl;
    return 0;
}