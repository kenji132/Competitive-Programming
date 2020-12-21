#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> v;
    for(int i = 0; i < n; ++i){
        int a;
        cin >> a;
        v.push_back(a);
    }
    int cnt = 0;
    int ans = 0;
    for(int i = 0; i < n-1; ++i){ 
        if(v[i] - v[i+1] >= 0){
            cnt++;
        }else if(v[i] - v[i+1] < 0){
            cnt = 0;
        }
        if(cnt > ans){
            ans = cnt;
        }
    }
    cout << ans << endl;
}