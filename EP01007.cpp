#include<iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int t;
    cin >> t;
    while (t--) {
        ll a, b, c, d; cin >> a >> b >> c >> d;
        ll gcd = __gcd(a,b);
        ll lcm = a*b/gcd;
        gcd = __gcd(c,gcd);
        lcm = lcm*c/__gcd(c,lcm);
        ll o = ceil(pow(10, d - 1) / lcm);
        if (o * lcm >= pow(10, d)) cout << -1;
        else cout << o * lcm;
        cout << endl;
    }
    return 0 ;
}
