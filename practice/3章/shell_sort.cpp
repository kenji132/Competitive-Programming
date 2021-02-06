#include <bits/stdc++.h>
using namespace std;

long long int cnt = 0 ;
vector<int> G;

void insert(int C[], int n, int g){
    for(int i = g; i < n; i++){
        int v = C[i];
        int j = i - g;
        while(j >= 0 && C[j] > v){
            C[j+g] = C[j];
            j -= g;
            cnt++;
        }
        C[j+g] = v;
    }
}

void shellSort(int C[], int n){
    for(int h = 1; ; ){
        if(h > n) break;
        G.push_back(h);
        h = 3*h + 1;
    }

    for(int i = G.size()-1; i >= 0; i--){
        insert(C,n,G[i]);
    }
}

int main(){
    int n;
    int A[1000000];
    cin >> n;
    for(int i = 0; i < n; i++) scanf("%d", &A[i]);
    cnt = 0;

    shellSort(A,n);

    cout << G.size() << endl;
    for(int i = G.size()-1; i >= 0; i--){
        cout << G[i] << " ";
    }
    cout << endl;
    cout << cnt << endl;

    for(int i = 0; i < n; i++) cout << A[i] << endl;

    return 0;

}