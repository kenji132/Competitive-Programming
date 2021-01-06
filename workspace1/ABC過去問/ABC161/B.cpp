#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin >> n >> m;
    long long sum = 0;
    vector<int> data;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        sum += x;
        data.push_back(x);
    }
    sort(data.begin(), data.end());
    reverse(data.begin(), data.end());
    double v = (double)sum/(4*m);
    for(int i = 0; i < m; i++){
        if(data[i] < v){
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}