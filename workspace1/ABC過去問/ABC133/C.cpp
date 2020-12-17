#include <bits/stdc++.h>
using namespace std;

int main(){
    int l,r;
    cin >> l >> r;
    if (r - l + 1 >= 2019) {
        cout << 0 << endl;
    }else{
        long long int ans = 2019;
        for(long long int i = l; i < r; ++i){
            for(long long int j = i+1; j <= r; ++j){
                ans = min(ans, i*j%2019);
            }
        }
        cout << ans << endl;
    }
}