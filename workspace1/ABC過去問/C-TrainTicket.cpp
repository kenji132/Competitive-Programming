#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    vector<string> f(3);
    for(int tmp=0; tmp<(1<<3);tmp++){
        bitset<3> bs(tmp);
        int sum = s[0]-'0';
        for(int i=0; i < 3; ++i ){
            if(!bs.test(i)){
                f[i] = '+';
                sum += s[i+1]-'0';
            }else{
                f[i] = '-';
                sum -= s[i+1]-'0';
            }
        }
        if(sum == 7){
cout << sum << endl;
            break;
        }
    }
        cout << s[0] << f[0] << s[1] << f[1] << s[2] << f[2] << s[3] << "=7" << endl;
}