#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<string> v;
    for(int i = 0; i < n; i++){
        string s;
        cin >> s;
        v.push_back(s);
    }
    do {
        for (auto str : v) {
            cout << str << " ";
        }
        cout << "\n";
    } while (next_permutation(v.begin(), v.end()));
}