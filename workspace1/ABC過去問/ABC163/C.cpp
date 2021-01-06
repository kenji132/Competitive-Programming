#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> v(n,0);
    vector<int> data(n,0);
    for(int i = 1; i < n; ++i){
        int x;
        cin >> x;
        x--;
        v[i] = x;
    }
    for(int i = 1; i < n; ++i){
        data[v[i]]++;
    }
    for(int i = 0; i < n; ++i){
        cout << data[i] << endl;
    }
    return 0;
}