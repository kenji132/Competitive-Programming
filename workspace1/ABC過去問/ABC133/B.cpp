#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,d;
    cin >> n >> d;

    vector<vector<double>> data(n, vector<double>(d));
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < d; ++j){
            double a;
            cin >> a;
            data[i][j] = a;
        }
    }

    int count = 0;

    for(int i = 0; i < n; ++i){
        for(int m = i; m < n; ++m){
            if (i == m) {
				continue;
			}
            double ans = 0;
            for(int j = 0; j < d; ++j){
                ans += pow(data[i][j] - data[m][j],2.0);
            }
            ans = sqrt(ans);
            if(floor(ans) == ans){
                count++;
            }
        }
    }

    cout << count << endl;

}