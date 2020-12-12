#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> data;
    for(int i = 0; i < n; ++i){
        int w;
        cin >> w;
        data.push_back(w);
    }

    int d;
    for(int t = 0; t < n; ++t){
        int s1 = 0, s2 = 0;
        for(int j = 0; j < (t+1); ++j){
            s1 += data[j];
        }
        for(int j = t+1; j < n+1; ++j){
            s2 += data[j];
        }
        int diff;
        diff = abs(s1 - s2);
        if(t == 0){
            d = diff;
        }else if(t > 0){
            if(d > diff){
                d = diff;
            }
        }
    }

    cout << d << endl;

}