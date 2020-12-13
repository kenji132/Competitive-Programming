#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int w,h,x,y;
    cin >> w >> h >> x >> y;

    cout << fixed << setprecision(10) << w*h*0.5 << endl;

    int count = 0;
    if(x*2 == w && y*2 == h){
        count = 1;
    }else{
        count = 0;
    }
    cout << count << endl;
    return 0;
}