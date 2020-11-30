#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<pair<int,int>> p;
    for(int i = 0; i < N; i++){
        int fir,sec;
        cin >> fir >> sec;
        p.push_back(make_pair(sec,fir));
    }
    sort(p.begin(),p.end());
    
    // for(auto P : p){
    //     cout << P.second << " " << P.first << endl;
    // }
    // cout << endl;

    for(int i = 0; i < N; i++){
        int a,b;
        tie(b,a) = p.at(i);
        cout << a << " " << b << endl;
    }

}