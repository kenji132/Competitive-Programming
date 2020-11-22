#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, A;
    cin >> N >> A;

    int result = 0;
    result = A;
    for(int i = 0; i < N; i++){
        string op;
        int B;
        cin >> op >> B;


        if(op=="+"){
            result+=B;
            cout << i+1 << ":" << result << endl;
        }else if(op=="-"){
            result-=B;
            cout << i+1 << ":" << result << endl;
        }else if(op=="*"){
            result*=B;
            cout << i+1 <<":" << result << endl;
        }else if(op=="/"){
            if(B == 0){
                cout << "error" << endl;
                break;
            }
            result/=B;
            cout << i+1 << ":" << result << endl;
        }
    }
}
