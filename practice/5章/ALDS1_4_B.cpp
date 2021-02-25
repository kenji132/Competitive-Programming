#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,q;
    cin >> n;
    vector<int> v;
    for(int i=0;i<n; i++){
        int x;
        cin >> x;
        v.push_back(x);
    }
    cin >> q;
    int sum = 0;
    for(int i = 0; i < q; i++){
        int y;
        cin >> y;
        int left = 0;
        int right = n;
        while(left < right){
            int mid = (left + right) / 2;
            if(y == v[mid]){
                sum++;
                break;
            }else if(y < v[mid]){
                right = mid;
            }else{
                left = mid + 1;
            }
        }
    }
    cout << sum << endl;
}