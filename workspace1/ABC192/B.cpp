#include <bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin >> str;
    bool ok = true;
    int n = str.size();
    for(int i = 0; i < n; i++){
        if(i %2==0){ //奇数
            if(isupper(str[i])){
                ok=false;
                break;
            }
        }else{
            if(islower(str[i])){
                ok = false;
                break;
            }
        }
    }
    if(ok){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}