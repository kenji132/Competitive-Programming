#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    bool OK=false;
    if((s[0]==s[1] && s[2]==s[3] && s[0] != s[2]) || (s[0]==s[2] && s[1]==s[3] && s[0] != s[1]) || (s[0]==s[3] && s[1]==s[2] && s[0] != s[2])){
        OK = true;
    }

    if(OK){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}