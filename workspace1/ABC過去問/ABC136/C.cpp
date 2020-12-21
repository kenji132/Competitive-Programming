#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> h;
    for(int i = 0; i < n; ++i){
        int a;
        cin >> a;
        h.push_back(a);
    }

    int t=0;
    h[0]--;
    for(int i = 0; i < n-1; ++i){
        if(h[i] < h[i+1]){
            h[i+1]--;
        }
    }

    for(int i = 0; i < n-1; ++i){
        if(h[i] > h[i+1]){
            t = 1;
        }
    }


            if(t == 1){
                cout << "No" << endl;
            }else{
                cout << "Yes" << endl;
            }
}