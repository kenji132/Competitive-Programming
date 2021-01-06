#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<string> v;
    for(int i = 0; i < n; ++i){
        string a;
        cin >> a;
        v.push_back(a);
    }
    sort(v.begin(), v.end());
    int cnt = 1;
    for(int i = 0; i < n-1; ++i){
        if(v[i] != v[i+1]){
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}