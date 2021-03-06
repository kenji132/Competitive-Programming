#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  vector<pair<int,int>> a;
  vector<pair<int,int>> b;
  for(int i = 0; i < n; i++){
    int a1,b1;
    cin >> a1;
    cin >> b1;
    a.push_back(make_pair(a1,i));
    b.push_back(make_pair(b1,i));
  }
  sort(a.begin(),a.end());
  sort(b.begin(),b.end());
  int ans;
  if(a[0].second == b[0].second){
    if(a[0].first + b[0].first <= min(b[1].first,a[1].first)){
      ans = a[0].first + b[0].first;
    }else if(a[0].first == b[0].first){
      if( a[1].first > b[1].first){
        ans = b[1].first;
      }else{
        ans = a[1].first;
      }
    }else if(a[0].first > b[0].first){
      ans = a[1].first;
    }else{
      ans = b[1].first;
    }
  }else{
    ans = max(a[0].first, b[0].first);
  }
  cout << ans << endl;
}