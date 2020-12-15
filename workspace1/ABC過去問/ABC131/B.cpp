#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,l;
    cin >> n >> l;

    int p;//perfect
    p = l*n+n*(n-1)/2;
    int ans = 0;
        int a = -1;

    for(int i = 0; i < n; i++){
        int u;//imcomplete
        u = p -(l+i);
        int d;
        d = l+i;
        if(a < 0){
            a = d;
            ans = u;
        }else if(a > d){
            a = d;
            ans = u;
        }else{
        }
    }

    cout << ans << endl;
    
}