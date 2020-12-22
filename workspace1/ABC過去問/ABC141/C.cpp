#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,k,q;
    cin >> n >> k >> q;
    vector<int> s;
    vector<int> pnt(n,k-q);
    for(int i = 0; i < q; i++){
        int a;
        cin >> a;
        s.push_back(a);
        pnt[s[i]-1] += 1;
    }

    int cnt = 0;
    for(int i = 0; i < n; i++){
        if(pnt[i] > 0){
            cout << "Yes" << endl;
        }else{
            cout << "No" << endl;
        }
    }

}