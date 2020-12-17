#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> data;
    vector<int> data1;
    for(int i = 0; i < n; ++i){
        int a;
        int b;
        cin >> a;
        b = -a;
        data.push_back(a);
        data1.push_back(b);
    }

    sort(data1.begin(), data1.end());
    for(int i = 0; i < n; ++i){
        if(data[i] == data1[0]*(-1)){
            cout << data1[1]*(-1) << endl;
        }else{
            cout << data1[0]*(-1) << endl;
        }
    }
}