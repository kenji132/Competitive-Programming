#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    vector<bool> data(n+2);
    for (int i = 0; i < m; i++){
        int s;
        cin >> s;
        data[s] = true;
    }
    int ans = 0;
    vector<int> dp(n+2);
    const int mod = 1000000007;
    dp[n] = 1;
    for(int i = n-1; i >= 0; i--){
        if(data[i]){
            dp[i] = 0;
            continue;
        }
        dp[i] = (dp[i+1] + dp[i+2]) % mod;
    }
    cout << dp[0] << endl;
    return  0;
}