#include <bits/stdc++.h>
using namespace std;

int main(){
    int x;
    int k;
    cin >> x >> k;
    int num = x;
    for(int j = 0; j < k; ++j){
        int n = 0;
        vector<int> v;
        while(num != 0){
            v.push_back(num%10);
            num /= 10;
            n++;
        }
        sort(v.begin(), v.end());
        int ans =0;
        for(int i = 0; i < n; i++){
            ans += (v[n-1-i]-v[i])*pow(10,n-i-1);
        }
        num = ans;
    }
    cout << num << endl;
}