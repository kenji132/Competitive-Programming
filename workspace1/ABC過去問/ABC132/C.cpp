#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> data;
    for(int i = 0; i < n;i++){
        int a;
        cin >> a;
        data.push_back(a);
    }

    sort(data.begin(), data.end());
    int ans = 0;
    int m = n/2;
    if(data[m] != data[m-1]){
        ans = data[m] - data[m-1];
    }else{
    }

    cout << ans << endl;
}