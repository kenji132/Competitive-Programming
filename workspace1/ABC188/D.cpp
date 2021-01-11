#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    int n;
    ll C;
    cin >> n >> C;
    map<int,ll> events;
    for(int i = 0; i < n; i++){
        int a,b,c;
        cin >> a >> b >> c;
        events[a] += c;
        events[b+1] -= c;
    }
    ll ans = 0;
    ll s = 0;
    int pre = 0;
    for(auto event : events){
        ans += min(C,s)*(event.first - pre); 
        s += event.second;
        pre = event.first;
    }
    cout << ans << endl;
    return 0;
}