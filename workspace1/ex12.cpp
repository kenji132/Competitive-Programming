#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    cin >> S;
    int N,sum;
    N = S.size();
    sum = 1;

    for (int i = 1; i < N; i+=2){
        char a;
        a = S.at(i);
        if(S.at(i) == '+'){
            sum++;
        }else if(S.at(i) == '-'){
            sum--;
        }
    }
    cout << sum << endl;
}
