#include<bits/stdc++.h>
using namespace std;
int main(){
    int n , k ;
    cin >> n >> k ;
    vector < int > d(k) ;
    set < int > a ;
    for( int i = 0 ; i < k ; i++ ){
        cin >> d[i] ;
        for( int j = 0 ; j < d[i] ; j++ ){
            int p ;
            cin >> p ;
            a.insert(p) ;
        }
    }
    n-= a.size() ;
    cout << n << endl;
}
