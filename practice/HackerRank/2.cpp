#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'countingValleys' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER steps
 *  2. STRING path
 */

int countingValleys(int steps, string path) {
    int sea_revel = 0;
    int cnt = 0;
    int ans = 0;
    if(path[0] == 'U'){
        sea_revel++;   
    }else if(path[0] == 'D'){
        sea_revel--;
        cnt++;
    }
    for(int i = 1; i < steps ; i++){
        if(path[i] == 'U'){
            sea_revel++;   
        }else if(path[i] == 'D'){
            sea_revel--;
        }
        if(sea_revel == 0){
            cnt++;
        }
    }
    if(cnt == 0){
        ans = 0;
    }else{
        ans = cnt-1;
    }
    return ans;
}

int main(){
    int steps;
    string path;
    cin >> steps >> path;
    int sea_revel = 0;
    int cnt = 0;
    int ans = 0;
    if(path[0] == 'U'){
        sea_revel++;   
        cnt++;
    }else if(path[0] == 'D'){
        sea_revel--;
        cnt++;
    }
    char UorD;
    for(int i = 1; i < steps ; i++){
        if(path[i] == 'U'){
            sea_revel++;
            UorD = 'U';
        }else if(path[i] == 'D'){
            sea_revel--;
            UorD = 'D';
        }
        if(sea_revel == 0){
            cnt++;
            if(UorD == 'D'){
                cnt--;
            }
        }
        cout << sea_revel << endl;
        cout << cnt << endl;
    }
    if(cnt == 0){
        ans = 0;
    }else{
        ans = cnt-1;
    }
    cout << ans << endl;
    return ans;
    return 0;
}
