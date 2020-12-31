#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ll n;
    cin >> n;
    vector<ll> v;
    ll sum = 0;
    for(int i = 0; i < n; ++i){
        ll a;
        cin >> a;
        sum += a;
        v.push_back(a);
    }
    ll ave = sum / n;
    ll ans = 0;
    ll ans1 = 0;
    for(int i = 0; i < n; ++i){
        ans+= pow(v[i] - ave, 2);
        ans1+= pow(v[i] - ave - 1, 2);
    }
    cout << min(ans1, ans) << endl;
}