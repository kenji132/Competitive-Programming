#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n, k; cin >> n >> k;
    k = abs(k);
    long long ans = 0;
    for (long long y=2; y+k<=2*n; y++){
        if (y+k<=n+1)
            ans += (y+k-1) * (y-1);
        else if (y<=n+1)
            ans += (2*n-(y+k)+1) * (y-1);
        else 
            ans += (2*n-(y+k)+1) * (2*n-y+1);
    }
    cout << ans << endl;
}