#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<int> num(s.length());
    for(int i = 0; i < s.length(); ++i){
        cout<<char('A'+(s[i]-'A'+n)%26);
    }
    cout<<endl;
    return 0;
}