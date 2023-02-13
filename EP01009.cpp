#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ull unsigned long long int
#define FOR(i,a,b) for(int i = a ; i <= b ; i++)
int main() {
	int t;
    cin >> t ;
   while(t--){
        ull a,x,y;
        cin >> a >> x >> y ;
        FOR(i,1,__gcd(x,y)) cout << a;
        cout << endl;
    }
    return 0 ;
}
