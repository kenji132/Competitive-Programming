#include <bits/stdc++.h>
using namespace std;
int main() {
    
    string S;
    cin>>S;
    
    int N=S.size();
    
    long long sum=0;
    
    
    for(int tmp=0;tmp<(1<<(N-1));tmp++){
        bitset<9> bit(tmp);
        int y=0;
        
        for(int i=0;i<N-1;i++){
            if(!(bit.test(i))){
                int num=S[(N-1)-i]-'0';
                sum+=(num*pow(10,y));
                y++;
                cout << S[(N-1)-i] << endl;
            }else{
                int num=S[(N-1)-i]-'0';
                sum+=(num*pow(10,y));
                y=0;
                cout << S[(N-1)-i] << endl;
            }
        }
        
        int num=S[0]-'0';
        sum+=(num*(pow(10,y)));
    }
    cout<<sum<<endl;
}