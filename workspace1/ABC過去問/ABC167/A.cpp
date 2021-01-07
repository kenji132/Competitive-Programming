#include <bits/stdc++.h>
using namespace std;
int main(){
    string s,t;
    cin >> s >> t;
    bool ok = true;
    if(s.length() + 1 == t.length()){
        for(int i = 0; i < s.length(); i++){
            if(s[i] != t[i]){
                ok = false;
            }
        }
    }
    if(ok){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}