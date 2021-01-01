#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    int n;
    n = s.length();
    bool ok = true;
        for(int i = 0; i < n/2; ++i){
            if(s[i] != s[n-i-1]){
                ok = false;
            }
        }
        if(ok){
            for(int i = 0; i < n/4; ++i){
                if(s[i] != s[(n/2)-1-i]){
                    ok = false;
                }
            }
            if(ok){
                for(int i = 0; i < n/4; ++i){
                    if(s[(n/2)+1+i] != s[n-1-i]){
                        ok = false;
                    }
                }
            }
        }
        if(ok){
            cout << "Yes" << endl;
        }else{
            cout << "No" << endl;
        }
}