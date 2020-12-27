#include <bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cin >> x;
    bool prime = false;
    double n = sqrt(x);
    while(!prime){
        if(x == 2){
            break;
        }else if(x == 3){
            break;
        }else if(x == 5){
            break;
        }else if(x%2 == 0){
            x++;
        }else{
            for(int i = 3; i < n; i+= 2){
                if(x%i == 0){
                    x++;
                    prime = false;
                    break;
                }else{
                    prime = true;
                }
            }
        }
    }
    cout << x << endl;
}