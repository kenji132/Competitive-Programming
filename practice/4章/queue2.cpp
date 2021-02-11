#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,q;
    cin >> n >> q;
    queue<string> str;
    queue<int> num;
    for(int i = 0; i < n; i++){
        int x;
        string s;
        cin >> s >> x;
        str.push(s);
        num.push(x);
    }
    int t;
    while(num.size() > 0){
        if(num.front() > q){
            num.push(num.front() - q);
            str.push(str.front());
            num.pop();
            str.pop();
            t += q;
        }else{
            t += num.front();
            cout << str.front() << " " << t << endl;
            num.pop();
            str.pop();
        }
    }
    return 0;
}