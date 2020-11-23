#include <bits/stdc++.h>
using namespace std;

int main(){
    int A,B,C;
    cin >> A >> B >> C;

    vector<int> tall(3);
    tall[0] = A;
    tall[1] = B;
    tall[2] = C;
    sort(tall.begin(),tall.end());
    
    cout << tall[2]-tall[0] << endl;
}