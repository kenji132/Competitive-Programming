#include <bits/stdc++.h>
using namespace std;
int main(){
    int r,D,x;
    cin >> r >> D >> x;

    vector<int> a(11);
    a.at(0) = x;
    for(int i = 0; i < 10; i++){
        a.at(i + 1) = r*a.at(i) - D;
        cout << a.at(i + 1) << endl;
    }
}