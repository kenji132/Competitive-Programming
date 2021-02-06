#include <bits/stdc++.h>
using namespace std;

int main(){
    string s,t;
    cin >> s >> t;
    int ss,ts;
    ss = s.length();
    ts = t.length();
    int mincnt = 10000;
    for(int i = 0; i < ss-ts+1; i++){
        int cnt = 0;
        for(int j = 0; j < ts; j++){
            if(s[i] != t[j]){
                cnt++;
            }
            i++;
        }
        mincnt = min(mincnt,cnt);
        i -= ts;
    }
    cout << mincnt << endl;

}