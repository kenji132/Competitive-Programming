#include <bits/stdc++.h>
using namespace std;
int main(){
    int x,n;
    cin >> x >> n;
    set<int> d;
    for(int i = 0; i < n; i++){
        int p;
        cin >> p;
        d.insert(p);
    }
    int dif = 100;
    int ans = 100;
    for(int i = 0; i <= 101; ++i){
        if(d.find(i) == d.end()){
            if(abs(x-i) < dif){
                dif = abs(x - i);
                ans = i;
            }
        }
    }
    cout << ans << endl;
    return 0;
}
