#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin >> n >> m;
    vector<int> ac(n),pena(n);
    for(int i = 0; i < m; ++i){
        int x;
        string s;
        cin >> x >> s;
        --x;
        if(ac[x] != 0){
            continue;
        }
        if(s == "AC"){
            ac[x] = 1;
        }else{
            pena[x]++;
        }
    }
    int wcnt = 0;
    int acnt = 0;
    for(int i = 0; i < n; ++i){
        acnt += ac[i];
        if(ac[i] != 0){
            wcnt += pena[i];
        }
    }
    cout << acnt << " " << wcnt << endl;
}