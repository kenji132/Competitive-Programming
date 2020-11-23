#include <bits/stdc++.h>
using namespace std;

int main(){
    int N,T,ans = 0;
    cin >> N >> T;
    vector<int> time(0);
    for (int i = 0; i < N; ++i){
        int ia;
        cin >> ia;
        time.push_back(ia);
    }
    int sum = 0,avr;
    for (int i = 0; i < N; ++i){
        sum += time[i];
    }
    avr = sum / N;
    vector<int> diff(N);
    for (int i = 0; i < N; ++i){
        if(time[i] >= avr){
            diff[i] = time[i] - avr;
        }else{
            diff[i] = avr - time[i];
        }
    }
    
            cout << sum/N << endl;
            sort(time.begin(), time.end());
        for(int i = 0; i < N; ++i){
            if (ans <= T){
                ans += time[i];
                if(ans＞= T){
                    ans -= time[i];
                    break;
                }
                    // cout << ans << endl;
            }else{
                break;
            }
        }

    cout << ans << endl;
}