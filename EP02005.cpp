#include <bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for(int i = a ; i <= b ; i++)
int main() {
    int t;
    cin >> t ;
    while(t--) {
        int n ,x,a[100000] ;
        cin >> n ;
        FOR(i,0,n-1) cin >> a[i] ;
        int res = -1 ;
        FOR(i,0,n-1){
            FOR(j,i+1,n-1){
                int pos = a[j] - a[i] ;
                if(pos>res) 
					res = pos ;
            }
        }
        cout<<res<<endl;
    }
    return 0 ;
}
