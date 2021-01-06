#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin >> n >> m;
    int sum = 0;
    vector<int> v;
    for(int i = 0; i < m; ++i){
        int a;
        cin >> a;
        sum += a;
        v.push_back(a);
    }
    if(sum > n){
        cout << "-1" << endl;
    }else{
        cout << n - sum << endl;
    }
	return 0;
}