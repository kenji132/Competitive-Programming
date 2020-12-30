#include <bits/stdc++.h>
using namespace std;
int main(){
    string s,t,u;
    int a,b;
    cin >> s >> t;
    cin >> a >> b;
    cin >> u;
    if(u == s){
        a--;
    }else if(u == t){
        b--;
    }
    cout << a << " " << b << endl;
}