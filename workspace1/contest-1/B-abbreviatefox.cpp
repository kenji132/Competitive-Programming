#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    string s;
    cin >> s;

    string t="";
    while(s.size()!=0){
        char c;
        c=s.at(0);
        t+=c;
    cout << t.find("fox") << endl;
        s.erase(0,1);
        if(t.size()>3){
            if(t.find("fox")>=1){
                int start;
                start=t.size()-3;
                t.erase(start,3);
            }
        }
    }
    cout << t.size() << endl;
}
//     for(int i = 0; i < N;i++){
//         if(s.at(i)=='f'){
//             if((i+1)<N){
//                 if(s.at(i+1)=='o'){
//                     if((i+2)<N){
//                         if(s.at(i+2)=='x'){
//                             s.erase(i,3);
//                             N=s.size();
//                             i=-1;
//                         }else{
//                         i+=1;
//                         }
//                     }else{
//                     }
//                 }else{
//                 }
//             }else{
//             }
//         }
//     }
// cout << N << endl;
