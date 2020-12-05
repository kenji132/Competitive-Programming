#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    if((s[0]-'0')*10+(s[1]-'0') >= 13 ){
        if((s[2]-'0')*10+(s[3]-'0') >= 1 && (s[2]-'0')*10+(s[3]-'0') <= 12){
            cout << "YYMM" << endl;
        }else{
            cout << "NA" << endl;
        }
    }else if((s[0]-'0') == 0 && (s[1]-'0') == 0){
        if((s[2]-'0') == 0 && (s[3]-'0') == 0){
            cout << "NA" << endl;
        }else if((s[2]-'0')*10+(s[3]-'0') >= 1 && (s[2]-'0')*10+(s[3]-'0') <= 12){
            cout << "YYMM" << endl;
        }else{
            cout << "NA" << endl;
        }
    }else{
        if((s[2]-'0') == 0 && (s[3]-'0') == 0){
            cout << "MMYY" << endl;
        }else if((s[2]-'0')*10+(s[3]-'0') >= 1 && (s[2]-'0')*10+(s[3]-'0') <= 12){
            cout << "AMBIGUOUS" << endl;
        }else{
            cout << "MMYY" << endl;
        }
    }
}