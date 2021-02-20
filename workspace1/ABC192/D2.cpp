#include <bits/stdc++.h>
using namespace std;

int main(){
    long long m,n[60];
    string x;
    cin >> x >> m;
    int keta = x.size();
    n[0] = x[0] -'0';
    int max = n[0];
    vector<int> v;
    v.push_back(max);
    for (int i = 1; i < keta ; i++){
        n[i] = x[i]-'0';
        if(max < n[i]){
            max = n[i];
        }
        v.push_back(n[i]);
    }
    cout << max << endl;
    long long cnt = 0;
    long long ans = 0;
    while(ans <= m ){
        ans = 0;
        max++;
        for(long long i = 0; i < keta; i++){
            ans += v[i]*pow(max,keta-1-i);

        }
        cnt ++;
    }
    cout << cnt-1 << endl;
}