#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin >> n >> k;
    vector<int> price;
    for(int i = 0; i < n; ++i){
        int p;
        cin >> p;
        price.push_back(p);
    }
    sort(price.begin(), price.end());
    int ans = 0;
    for(int i = 0; i < k; i++){
        ans += price[i];
    }
    cout << ans << endl;
}