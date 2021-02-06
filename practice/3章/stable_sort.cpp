#include <bits/stdc++.h>
using namespace std;

struct Card { char suit, value;};

void bubble(struct Card C[],int N){
    for(int i = 1; i < N; i++){
        if(C[i-1].value > C[i].value){
            swap(C[i],C[i-1]);
            i = 0;
        }
    }
}

void selection(struct Card C[], int N){
    for(int i = 0; i < N; i++){
        int minj = i;
        for(int j = i; j < N; j++){
            if(C[j].value < C[minj].value){
                minj = j;
            }
        }
        if(minj != i){
            swap(C[minj], C[i]);
        }
    }
}

bool isStable(struct Card C1[], struct Card C2[], int N){
    for(int i = 1; i < N; i++){
        if(C1[i].suit != C2[i].suit){
            return false;
        }
    }
    return true;
}

int main(){
    int n;
    cin >> n;
    Card data1[n];
    Card data2[n];
    for(int i = 0; i < n; i++){
        cin >> data1[i].suit >> data1[i].value;
        data2[i].suit = data1[i].suit;
        data2[i].value = data1[i].value;
    }
    
    bubble(data1,n);
    selection(data2,n);

    for(int i = 0; i < n; i++){
        cout << data1[i].suit << data1[i].value << " ";
    }
    cout << endl;
    cout << "Stable" << endl;
    for(int i = 0; i < n; i++){
        cout << data2[i].suit << data2[i].value << " ";
    }
    cout << endl;
    if(isStable(data1,data2,n)){
        cout << "Stable" << endl;
    }else{
        cout << "Not Stable" << endl;
    }

    return 0;
}