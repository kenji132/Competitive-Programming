#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m,t;
    cin >> n >> m >> t;
    vector<pair<int,int>> data;
    data.push_back(make_pair(0,0));
    for(int i = 1; i < m+1; i++){
        int a,b;
        cin >> a >> b;
        data.push_back(make_pair(a,b));
    }

    int bat = n;
    int count = 0;

    for(int i = 0; i < m ; i++){
        int f,s;
        tie(f,s) = data.at(i);
        int f1,s1;
        tie(f1,s1) = data.at(i+1);
        int d;
        d = f1 - s;
        int d1;
        d1 = s1 - f1;
        bat -= d;
        if(bat <= 0){
            count++;
        }
        bat += d1;
        if(bat > n){
            bat = n;
        }
    }
    bat -= (t - data[m].second);
    if(count == 0){
        if( bat > 0 ){
            cout << "Yes" << endl;
        }else{
            cout << "No" << endl;
        }
    }else{
        cout << "No" << endl;
    }
}