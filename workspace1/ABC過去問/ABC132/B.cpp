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
    for(int i = 0; i < n-2; ++i){
        if((data[i] < data[i+1] && data[i+1] < data[i+2]) || (data[i] > data[i+1] && data[i+1] > data[i+2])){
            count++;
        }
    }

    cout << count << endl;
}