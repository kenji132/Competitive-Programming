#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> p,q;
    for(int i = 0; i < n; ++i){
        int x;
        cin >> x;
        p.push_back(x);
    }
    for(int i = 0; i < n; ++i){
        int y;
        cin >> y;
        q.push_back(y);
    }
    int k = 1;
    for(int i = 1; i < n+1; ++i){
        k *= i;
    }
    int pans = 0;
    int qans = 0;
    pans += (p[0]-1) * k / n;
    qans += (q[0]-1) * k / n;
    k /= n;
    int ps = p[0];//今までの最小値
    int qs = q[0];//今までの最小値
    for(int i = 0; i < n - 1; ++i){
        int pb = 0;
        int qb = 0;
        k /= n-(i+1);
        for(int j = i+1; j < n; ++j){
            if(p[i+1] > p[j]){
                pb++;
            }
            if(q[i+1] > q[j]){
                qb++;
            }
        }
        pans += pb*k;
        qans += qb*k;
    }
    int ans = 0;
    if(pans >= qans){
        ans = pans - qans;
    }else if(pans < qans){
        ans = qans - pans;
    }
    cout << ans << endl;
}