#include <bits/stdc++.h>
using namespace std;
int main(){
    int N,M;
    cin >> N >> M;

    vector<pair<int,int>> lm(M);
    for(int i=0; i < M; i++){
        cin >> lm[i].first >> lm[i].second;
    }


    pair<int, int> ans;
    ans = lm[0];
    bool possible = true;
    for(int i = 1; i < M; i++){
        if(lm[i].first > ans.second){
            possible = false;
            break;
        }else{
            if(lm[i].first <= ans.first){
                ans.first = max(ans.first, lm[i].first);
                ans.second = min(ans.second, lm[i].second);
            }else{
                ans.first = lm[i].first;
            }
        }
    }
    if(possible){
        cout << ans.second-ans.first+1 << endl;
    }else{
        cout << 0 << endl;
    }
}

