#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    map<string, long long int> cnt;
    for(int i = 0; i < n; ++i){
        string s;
        cin >> s;
        sort(s.begin(), s.end());
        cnt[s]++;
    }

    long long int ans = 0;
    for(auto& v : cnt){
        long long int s = v.second;
        ans += s*(s-1)/2;
    }

    cout << ans << endl;
    return 0;
}