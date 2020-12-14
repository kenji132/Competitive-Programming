#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> data;
    for(int i = 0; i <  4;i++){
        int a;
        cin >> a;
        data.push_back(a);
    }

    int ans = 0;
    for(int i = 0; i < 4; i++){
        if(ans == 0){
            ans = data[0];
        }else if(ans > data[i]){
            ans = data[i];
        }
    }
    cout << ans << endl;
}