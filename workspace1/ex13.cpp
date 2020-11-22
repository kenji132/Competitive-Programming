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

    for(int i = 0; i <N; i++){
        int dif=0;
        dif = avr - data[i];
        if(dif<0){
            cout << dif*(-1) << endl;
        }else{
            cout << dif << endl;
        }
    }
}