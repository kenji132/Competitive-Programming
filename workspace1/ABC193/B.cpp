#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    long long int min = 9999999999;
    for(int i = 0; i < n; i++){
        int a,p,x;
        cin >> a >> p >> x;
        if((x-a)>0){
            if(min > p){
                min = p;
            }
        }
    }
    if(min == 9999999999){
        min = -1;
        cout << min << endl;
    }else{
        cout << min << endl;
    }
}