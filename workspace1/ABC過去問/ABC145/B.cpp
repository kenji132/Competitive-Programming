#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    string s;
    cin >> n >> s;
    bool ok = true;
    if(s.size()%2 == 1){
        ok = false;
    }else{
        for(int i = 0; i < n/2; ++i){
            if(s[i] != s[i+n/2]){
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