#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin >> n >> m;
    vector<pair<int,int>> data;
    for(int i = 0; i < m; i++){
        int a,b;
        cin >> a >> b;
        data.push_back(make_pair(a,b));
    }
    for(int x = 0; x < 1000; x++){
        int keta= 1;
        int nx = x/10;
        vector<int> d(1,x%10);
        while(nx != 0){
            keta++;
            d.push_back(nx%10);//余り
            nx /= 10;//割り
        }
        if(keta != n){
            continue;
        }
        bool ok = true;
        reverse(d.begin(),d.end());
        for(int i = 0; i < m; i++){
            if(d[data[i].first - 1] != data[i].second){
                ok = false;
            }
        }
        if(ok){
            cout << x << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}