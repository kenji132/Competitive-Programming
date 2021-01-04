#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int n;
    cin >> n;
    vector<pair<double,double>> z;
    for(int i = 0; i < n; ++i){
        double x,y;
        cin >> x >> y;
        z.push_back(make_pair(x,y));
    }
    double k;
    int cnt = 0;
    for(int i = 0; i < n; ++i){
        for(int j = 1; j < n; ++j){
            if(i >= j){
                continue;
            }else{
                k = (z[j].second - z[i].second)/(z[j].first - z[i].first);
                if(k >= -1 && k <= 1){
                    cnt++;
                }
            }
        }
    }
    cout << cnt << endl;
    return 0;
}