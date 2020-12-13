#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,x;
    cin >> n >> x;
    vector<int> data;
    for(int i = 0; i < n; ++i){
        int d;
        cin >> d;
        data.push_back(d);
    }
    
    int sum = 0;
    int count = 1;
    for(int i = 0; i < n; ++i){
        sum += data[i];
        if(sum <= x){
            count++;
        }
    }

    cout  << count << endl;
}