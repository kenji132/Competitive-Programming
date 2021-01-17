#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    int n,d;
    cin >> n >> d;
    int cnt = 0;
    for(int i = 0; i < n; i++){
        double x,y;
        cin >> x >> y;
        double dis = sqrt(pow(x,2) + pow(y,2));
        if(dis <= d){
            cnt++;
        }
    }
    cout << cnt << endl;
}