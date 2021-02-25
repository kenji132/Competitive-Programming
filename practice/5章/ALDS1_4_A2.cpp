#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,q;
    cin >> n;
    vector<int> s;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        s.push_back(x);
    }
    cin >> q;
    int sum = 0;
    for(int i = 0; i < q; i++){
        int key,j;
        j = 0;
        cin >> key;
        s.push_back(key);
        while(s[j] != key) j++;
        if(j != n) sum ++;
        s.pop_back();
    }
    cout << sum << endl;
}
