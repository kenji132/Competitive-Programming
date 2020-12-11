#include <bits/stdc++.h>
using namespace std;

int main(){

    vector<int> data;
    for(int i=0; i<3; i++){
        int t;
        cin >> t;
        data.push_back(t);
    }

    sort(data.begin(), data.end());
    int ans = 0;
    ans = data[0] + data[1];

    cout << ans << endl;

}