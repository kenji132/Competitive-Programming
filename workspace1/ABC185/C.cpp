#include <bits/stdc++.h>
using namespace std;
int main(){
    int64_t l;
    cin >> l;
    int64_t li = l-1;
    int64_t ans = 1;

    for(int i = 1; i < 12; ++i){
        ans *= li-(i-1);
        ans /= i;
    }


    cout << ans << endl;
}