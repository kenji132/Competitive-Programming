#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ll N;
    cin >> N;
    string res = "";
    while(N){
        --N;
        res += (char)('a' + (N%26));
        N /= 26;
    }
    cout << res << endl;
    reverse(res.begin(),res.end());
    cout << res << endl;
    cout << (char)('a' + 1) << endl;
}