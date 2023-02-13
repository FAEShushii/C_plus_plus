#include <bits/stdc++.h>
using namespace std;
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
        cout<<a[n-1]<<endl;
    }
    return 0 ;
}
