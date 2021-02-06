#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> data(n);
    for(int i = 0; i < n; i++){
        cin >> data[i];
    }
    int minj;
    int cnt = 0;
    for(int i = 0; i < n; i++){
        minj = i;
        for(int j = i; j < n; j++){
            if(data[j] < data[minj]){
                minj = j;
            }
        }
        if(minj != i){
            swap(data[minj], data[i]);
            cnt++;
        }
    }
    for(int i = 0; i < n; i++){
        cout << data[i] << " ";
    }
    cout << endl;
    cout << cnt << endl;
}