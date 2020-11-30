#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<tuple<string,int,int>> g;
    for(int i = 0; i < N; ++i){
        string s;
        int p,j = i+1;
        cin >> s >> p;
        p=-p;
        g.push_back(make_tuple(s,p,j));
    }
    sort(g.begin(),g.end());

    for(int i = 0; i < N; ++i){
        string S;
        int P,J;
        tie(S,P,J) = g[i];
        cout <<  J << endl;
    }
}