#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> data(n);
    for(int i = 0; i < n; i++){
        cin >> data[i];
    }
    int cnt = 0;
    for(int i = 1; i < n; i++){
        if(data[i-1] > data[i]){
            swap(data[i-1],data[i]);
            cnt++;
            i = 0;
        }
    }
    for(int i = 0; i < n; i++){
        cout << data[i] << " ";
    }
    cout << endl;
    cout << cnt << endl;
}