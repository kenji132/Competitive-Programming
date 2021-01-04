#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int n;
    cin >> n;
    set<string> v1,v2;
    for(int i = 0; i < n; ++i){
        string s,t;
        cin >> s;
        t = "!"+s;
        if(s[0] == '!'){
            v1.insert(s);
        }else{
            v2.insert(s);
        }
    }
    bool ok = false;
    string ans;
    for(string str:v2){
        string str1 = "!";
        str1 += str;
        if(v1.count(str1)>0){
            ans = str;
            ok = true;
            break;
        }
    }

    if(ok){
        cout << ans << endl;
    }else{
        cout << "satisfiable" << endl;
    }
    return 0;
}