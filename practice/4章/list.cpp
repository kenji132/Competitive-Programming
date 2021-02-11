#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    scanf("%d",&n);
    list<int> L;
    char com[20];
    int num;
    for(int i = 0; i < n; i++){
        scanf("%s", com);
        if(com[0] == 'i'){
            scanf("%d",&num);
            L.push_front(num);
        }else if(com[6] == 'F'){
            L.pop_front();
        }else if(com[6] == 'L'){
            L.pop_back();
        }else if(com[0] == 'd'){
            scanf("%d",&num);
            for(list<int>::iterator itr = L.begin(); itr != L.end(); itr++){
                if(*itr == num){
                    L.erase(itr);
                    break;
                }
            }
        }
    }
    int i = 0;
    for(list<int>::iterator itr = L.begin(); itr != L.end(); itr++){
        if(i++) printf(" ");
        printf("%d", *itr);
    }
    cout << endl;
}