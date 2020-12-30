#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> data;
    for(int i = 0; i < n; ++i){
        int a;
        cin >> a;
        data.push_back(a);
    }
    int m = data[0];
    int cnt = 1;
    for(int i = 1; i < n; ++i){
        if(m > data[i]){
            m = data[i];
            cnt++;
        }
    }
    cout << cnt << endl;
}