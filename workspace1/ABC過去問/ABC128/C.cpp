#include <bits/stdc++.h>
using namespace std;
int main(){
    int N,M;
    cin >> N >> M;

    vector<int> a(N);
    for(int i = 0; i < M; i++){
        int k;
        cin >> k;
        for(int j=0; j < k; j++){
            int s;
            cin >> s;
            s--;
            a[s] |= 1 << i;
        }
    }
    int p=0;
    for(int i=0; i < M; ++i){
        int a;
        cin >> a;
        p |= a << i;
    }
    int ans = 0;

    //スイッチの入れ方の全探索
    for(int s=0; s <(1 << N); s++){
        int t= 0;
        for(int i=0; i < N; ++i){
            if(s >> i &1){
                t^=a[i];//二回スイッチを押すともとに戻るのでxor演算子
            }
        }
        if(t == p){
            ans++;
        }
    }

    cout << ans << endl;
    return 0;
}