#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a;
    vector<int> b;
    vector<int> c;
    for(int i = 0; i < n; ++i){
        int x;
        cin >> x;
        a.push_back(x);
    }
    for(int i = 0; i < n; ++i){
        int y;
        cin >> y;
        b.push_back(y);
    }

    for(int i = 0; i < n-1; ++i){
        int z;
        cin >> z;
        c.push_back(z);
    }

    int ans = 0;
    for(int i = 0; i < n; ++i){
        ans += b[a[i]-1];
        if(i == 0){
        }else if(a[i] == a[i-1]+1){
            ans += c[a[i-1]-1];
        }
    }

    cout << ans << endl;

}