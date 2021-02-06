#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    int i,j,a;
    for(int i = 1; i < n; i++){
            a = v[i];
            j = i - 1;
            while(j >= 0 && v[j] > a){
                v[j+1] = v[j];
                j--;
            }
            v[j+1] = a;
            for(int k = 0; k < n; k++){
                cout << v[k] << " ";
            }
            cout << endl;
    }
}