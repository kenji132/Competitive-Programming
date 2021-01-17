#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    int cnt = 0;
    int ans = 0;
    for(int i = 0; i < 3; i++){
        if(s[i] == 'R'){
            cnt++;
            ans = max(ans,cnt);
        }else{
            ans = max(ans,cnt);
            cnt = 0;
        }
    }
    cout << ans << endl;
}