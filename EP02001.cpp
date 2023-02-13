#include <iostream>
#include <algorithm>
using namespace std;
#define nc(x) cout << (x) << '\n';
#define FOR(i,a,b) for(int i = a ; i <= b ; i++)
#define ull unsigned long long int

int main() {
    int t;
    cin >> t ;
    while(t--) {
        ull n ,a[100000];
        cin >> n ;
        FOR(i,0,n-1) cin >> a[i] ;
        sort(a,a+n);
        ull res=111111111111110;
        FOR(i,1,n-1) {
            int pos = a[i]-a[i-1];
            if(pos<res) res = pos ;
        }
        nc(res);
    }
    return 0 ;
}
