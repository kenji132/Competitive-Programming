#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    list<int> L;
    for(int i = 0; i < n; i++){
        string com;
        int num;
        scanf("%s",com);
        if(com == "insert"){
            scanf("%d",&num);
            L.push_front(num);
        }else if(com == "deleteFirst"){
            L.pop_front();
        }else if(com == "deleteLast"){
            L.pop_back();
        }else if(com == "delete"){
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