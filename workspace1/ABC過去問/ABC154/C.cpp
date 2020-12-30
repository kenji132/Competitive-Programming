#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<long long> data;
    for(int i = 0; i < n; ++i){
        long long a;
        cin >> a;
        data.push_back(a);
    }
    sort(data.begin(), data.end());
    int m;
    m = data[0];
    bool ok = true;
    for(int i = 1; i < n; ++i){
        if(m == data[i]){
            ok = false;
            break;
        }
        m = data[i];
    }
    if(ok){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
}