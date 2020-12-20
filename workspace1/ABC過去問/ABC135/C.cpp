#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> ad;
    vector<int> bd;
    for(int i = 0; i < n + 1; ++i){
        int a;
        cin >> a;
        ad.push_back(a);
    }
    for(int i = 0; i < n; ++i){
        int b;
        cin >> b;
        bd.push_back(b);
    }

    long long int sum = 0;
    for(int i = 0; i < n; ++i){
        if((ad[i] + ad[i+1]) <= bd[i]){
            sum += ad[i] + ad[i+1];
            ad[i+1] = 0;
        }else if((ad[i] + ad[i+1]) > bd[i]){
            sum += bd[i];
            if(ad[i] < bd[i]){
                ad[i+1] -= bd[i] - ad[i];
            }
        }
    }

    cout << sum << endl;
}