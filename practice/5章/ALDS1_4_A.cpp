#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,q;
    vector<int> v,p;
    cin >> n;
    for(int i=0; i < n; i++){
        int x;
        cin >> x;
        v.push_back(x);
    }
    cin >> q;
    for(int i=0; i < q; i++){
        int x;
        cin >> x;
        p.push_back(x);
    }
    sort(v.begin(), v.end());
    sort(p.begin(), p.end());
    int cnt = 0;
    for(int i=0; i < q; i++){
        for(int j=0; j < n; j++){
            if(p[i] == v[j]){
                cnt++;
                break;
            }
        }
    }
    cout << cnt << endl;
}