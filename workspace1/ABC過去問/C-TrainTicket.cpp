#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    string f;
    for(int tmp=0; tmp<(1<<4);tmp++){
        bitset<4> bs(tmp);
        int sum = 0;
        for(int i=0; i < 4; ++i ){
            f = s[0];
            if(bs.test(i)){
                f += '+';
                f += s[i];
                sum += s[i];
            }else{
                f += '-';
                f += s[i+1];
                sum -= s[2-i];
            }
        }
    }

        cout << f << endl;
}