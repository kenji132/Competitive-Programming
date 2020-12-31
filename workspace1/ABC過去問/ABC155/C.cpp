#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<string> v;
    for(int i = 0; i < n; ++i){
        string a;
        cin >> a;
        v.push_back(a);
    }
    sort(v.begin(), v.end());
    vector<pair<string, int>> abc(n);
    int m = 0;
    for(int i = 0; i < n; ++i){
        if(v[i] == v[i+1]){
            m++;
        }else{
            m++;
            abc[i].first = v[i];
            abc[i].second = m;
            m = 0;
        }
    }
    int max = 1;
    for(int i = 0; i < n; i++){
        if(abc[i].second > max){
            max = abc[i].second;
        }
    }
    for(int i = 0; i < n; i++){
        if(max == abc[i].second){
            cout << abc[i].first << endl;
        }
    }
}