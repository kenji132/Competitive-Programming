#include <bits/stdc++.h>
using namespace std;
int main(){
    const double PI = acos(-1);
    int a,b,h,m;
    cin >> a >> b >> h >> m;
    double c;
    double v;
    v = ((double)h*60+(double)m)*0.5 - (double)m*6;
    if(v > 180){
        v = 360 - v;
    }
    double angle = v/180*PI;
    
    c = sqrt(pow(a,2)+pow(b,2)-2*a*b*cos(angle));
    cout << fixed << setprecision(10) << c << endl;
}