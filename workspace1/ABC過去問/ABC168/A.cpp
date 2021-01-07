#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int m = n%10;
    string ans;
    if(m == 3){
        ans = "bon";
    }else if(m == 0 || m == 1 || m == 6 || m == 8){
        ans = "pon";
    }else{
        ans = "hon";
    }
    cout << ans << endl;
}