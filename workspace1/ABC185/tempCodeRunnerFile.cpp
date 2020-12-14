#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m,t;
    cin >> n >> m >> t;
    

    int bat = n;

    vector<pair<int,int>> data1;
    for(int i = 0; i < m; i++){
        int a,b;
        cin >> a >> b;
        data1.push_back(make_pair(a,b));
    }
    for(int j = 1; j < t; j++){
        for(int i = 0; i < m; i++){
            if(j <= data1[i].first){
                bat -= 1;
                break;
            }else if(j > data1[i].first && j <= data1[i].second){
                bat += 1;
                break;
            }
        }
    cout << bat << endl;
    }
    bat -= (t - data1[m-1].second);
    
    cout << bat << endl;
    if( bat > 0 ){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}