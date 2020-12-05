#include <bits/stdc++.h>
using namespace std;
int main(){
    double N,K;
    cin >> N >> K;

    double win;
    double all_win = 0;
    for(int i = 0; i < N; ++i){
        int count = 0;
        int sum = i+1;
        if(sum >= K){
            win = 1/N;
        }else{
            while(sum < K ){
                sum *= 2;
                count += 1;
            }
            win = (1/N)*(pow(0.5,count));
        }
        all_win += win;
    }
    cout << fixed << setprecision(12) << all_win << endl;
}