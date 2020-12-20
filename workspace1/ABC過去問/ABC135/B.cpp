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

    int count = 0;
    for(int i = 0; i < n; ++i){
        if(data[i] == i+1){
            count++;
        }
    }

    if(count >= n-2){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
}