#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,k,m;
    cin >> n >> k >> m;
    int sum = 0;
    for(int i = 0; i < n-1; ++i){
        int a;
        cin >> a;
        sum += a;
    }
    int ans = n*m-sum;
    if(ans > k){
        ans = -1;
    }else if(ans < 0){
        ans = 0;
    }
    cout << ans << endl;
}