#include <bits/stdc++.h>
using namespace std;
int main(){
    int k,n;
    cin >> k >> n;
    vector<int> v;
    for(int i = 0; i < n; ++i){
        int a;
        cin >> a;
        v.push_back(a);
    }
    int ans = v[n-1] - v[0];
    for(int i = 1; i < n; ++i){
        if(v[(i+n-1)%n] < v[i]){
            v[(i+n-1)%n] += k;
        }
        int ans1 = v[(i+n-1)%n]-v[i];
        if(ans > ans1){
            ans = ans1;
        }
    }
    cout << ans << endl;

}