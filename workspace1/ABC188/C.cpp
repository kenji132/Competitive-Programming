#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int m;
    m = pow(2,n);
    vector<int> v1,v2;
    for(int i = 0; i < m/2; i++){
        int x;
        cin >> x;
        v1.push_back(x);
    }
    for(int i = 0; i < m/2; i++){
        int x;
        cin >> x;
        v2.push_back(x);
    }
    int max1 = 0;
    int ans1;
    int max2 = 0;
    int ans2;
    for(int i = 0; i < m/2; i++){
        if(max1 < v1[i]){
            max1 = v1[i];
            ans1 = i+1;
        }
        if(max2 < v2[i]){
            max2 = v2[i];
            ans2 = i+m/2+1;
        }
    }
    if(max1 > max2){
        cout << ans2 << endl;
    }else{
        cout << ans1 << endl;
    }
    
}