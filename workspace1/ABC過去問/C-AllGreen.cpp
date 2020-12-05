#include <bits/stdc++.h>
using namespace std;
int main(){
    int D,G;
    cin >> D >> G;
    vector<pair<int,int>> pg(D);
    for(int i = 0; i < D; i++){
        cin >> pg[i].first >> pg[i].second;
    }
    int ans =100000;
    for(int i = 0; i < (1 << 10); i++){
        bitset<10> bit(i);
        int sum = 0;
        int count =0;
        int rest_max = -1;
        for(int j = 0; j < D; j++){
            if(bit.test(j)){
                sum += (j+1)*100*pg[j].first+pg[j].second;
                count += pg[j].first;
            }else{
                rest_max = j;
            }
        }
        if(sum < G){
            int s1=100*(rest_max+1);
            int need =(G-sum+s1-1)/s1;
            if(need>=pg[rest_max].first){
                continue;
            }
            count += need;
        }
        ans = min(ans,count);
    }

    cout << ans << endl;
    return 0;
}
