#include <bits/stdc++.h>
using namespace std;
int main(){
    string n;
    cin >> n;
    bool ok = false;
    for(int i = 0; i < n.length(); ++i){
        if(n[i] == '7'){
            ok = true;
            break;
        }
    }
    if(ok){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}