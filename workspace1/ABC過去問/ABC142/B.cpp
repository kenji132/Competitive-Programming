#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin >> n >> k;
    int cnt = 0;
    vector<int> h;
    for(int i = 0; i < n; ++i){
        int x;
        cin >> x;
        if(x >= k){
            cnt++;
        }
    }
    cout << cnt << endl;
}