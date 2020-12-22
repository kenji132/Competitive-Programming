#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int ans = 0;
    vector<int> v;
    for(int i = 0; i < n-1; ++i){
        int b;
        cin >> b;
        v.push_back(b);
    }
    ans += v[0];
    for(int i = 0; i < n-2; ++i){
        if(v[i] <= v[i+1]){
            ans += v[i];
        }else if(v[i] > v[i+1]){
            ans += v[i+1];
        }
    }
    ans += v[n-2];
    cout << ans << endl;
}