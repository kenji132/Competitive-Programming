#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    bool ok = true;
    for(int i = 0; i < s.length(); i++){
        if(s[i] == s[i+1]){
            ok = false;
            break;
        }else{
            ok = true;
        }
    }

    if(ok){
        cout << "Good" << endl;
    }else{
        cout << "Bad" << endl;
    }
}