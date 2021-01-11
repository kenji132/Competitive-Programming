#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<pair<int,int>> color;
    for(int i = 0; i < n; i++){
        int a,b;
        cin >> a >> b;
        color.push_back(make_pair(a,b));
    }
    sort(color.begin(), color.end());
    for(int i = 0; i < n; i++){
        cout << color[i].first << " " << color[i].second << endl;
    }
}
