#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin >> a >> b;
    int ans = 0;
    if(a-b > 0){
        ans = a-b;
    }else{
        ans = b-a;
    }
    if(ans <= 2){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}