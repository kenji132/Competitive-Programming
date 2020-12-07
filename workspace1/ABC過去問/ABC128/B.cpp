#include <bits/stdc++.h>
using namespace std;
int main(){
    int N;
    cin >> N;

    vector<tuple<string, int, int>> data;
    for(int i = 0; i < N; i++){
        int p;
        string name;
        cin >> name >> p;
        data.push_back(make_tuple(name,(-1)*p,i+1));
    }

    sort(data.begin(), data.end());
    for (int i = 0; i < N; i++){
        string name;
        int p,num;
        tie(name,p,num) = data[i];
        cout << num << endl;
    }

}