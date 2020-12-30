#include <bits/stdc++.h>
using namespace std;
int main(){
    int h,n;
    cin >> h >> n;
    int sum = 0;
    for(int i = 0; i < n; ++i){
        int a;
        cin >> a;
        sum += a;
    }
    if(h <= sum){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}