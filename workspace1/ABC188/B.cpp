#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> a,b;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        a.push_back(x);
    }
    for(int i = 0; i < n; i++){
        int y;
        cin >> y;
        b.push_back(y);
    }
    int ans = 0;
    for(int i = 0; i < n; i++){
        ans += a[i]*b[i];
    }
    if(ans == 0){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}