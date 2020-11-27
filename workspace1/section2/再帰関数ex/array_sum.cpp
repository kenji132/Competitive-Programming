#include <bits/stdc++.h>
using namespace std;

int array_sum_from_i(vector<int> &A,int i){
    if(i == A.size()){
        return 0;
    }
    int sum = array_sum_from_i(A,i+1);
    return sum + A[i];
}

int array_sum(vector<int> &A){
    return array_sum_from_i(A, 0);
}

int main(){
    vector<int> A = {0, 3, 9, 1, 5};
    cout << array_sum(A) << endl;
}