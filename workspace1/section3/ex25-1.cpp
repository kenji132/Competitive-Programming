#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, K;
    cin >> N >> K;
    vector<int> num(N);
    for (int i = 0; i < N; ++i){
        cin >> num[i];
    }

    bool ans =false;

    for (int tmp = 0; tmp < (1 << 20); tmp++ ){
        bitset<20> s(tmp);
        int sum = 0;
        for (int i = 0; i < N; ++i){
            if(s.test(i)){
                sum += num[i];
            }
        }
        if(sum == K){
            ans = true;
        }
    }

    if(ans){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
}