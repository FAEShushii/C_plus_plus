#include<iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ull unsigned long long int
int main() {
    int t ;
    cin >> t ;
    while(t--){
        ull a ,b;
        cin >> a >> b ;
        int r = __gcd(a,b);
        a /= r;
        b /= r;
        while(a%2==0||a%3==0){
            if(a%2==0) a/=2;
            if(a%3==0) a/=3;
        }
        while(b%2==0||b%3==0){
            if(b%2==0) b/=2;
            if(b%3==0) b/=3;
        }
        if(a==1&&b==1) cout << "YES\n" ; else cout << "NO\n";
    }
    return 0 ;
}
