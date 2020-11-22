#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<int> data(N);

    for(int i = 0; i < N;i++){
        cin >> data[i];
    }
    int avr,sum = 0;
    for(int i = 0; i <N;i++){
        sum += data[i];
        avr = sum / N;
    }

    cout << avr << endl;
}