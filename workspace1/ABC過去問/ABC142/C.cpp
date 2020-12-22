#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<pair<int,int>> data;
    for(int i = 0; i < n; ++i){
        int x,y;
        y = i + 1;
        cin >> x;
        data.push_back(make_pair(x,y));
    }

    sort(data.begin(), data.end());

    for(int i = 0; i < n; ++i){
        cout << data[i].second << " ";
    }
    cout << endl;
}