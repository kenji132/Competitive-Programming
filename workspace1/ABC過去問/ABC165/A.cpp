#include <bits/stdc++.h>
using namespace std;
int main(){
    int k,a,b;
    cin >> k >> a >> b;
    bool ok = false;
    for(int i = a; i < b+1; ++i){
        if(i%k == 0){
            ok = true;
            break;
        }
    }
    if(ok){
        cout << "OK" << endl;
    }else{
        cout << "NG" << endl;
    }
    return 0;
}