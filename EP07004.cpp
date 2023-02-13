#include <bits/stdc++.h>
using namespace std;
class Fraction{
    public:
    long long int x,y,p,q;
};

void input(Fraction &X){
    cin >> X.x >> X.y >> X.p >> X.q;
}
void simplify(Fraction &X){
    long long int d = __gcd(X.x,X.y);
    long long int d2 = __gcd(X.p,X.q);
    X.x = X.x/d;
    X.y = X.y/d;
    X.p = X.p/d2;
    X.q = X.q/d2;
    long long int res = X.x*X.q+X.y*X.p;
    long long int pos = X.y*X.q ;
    long long int wal = __gcd(res,pos);
    res /= wal ;
    pos /= wal ;
    cout << res << "/" << pos ;
}
int main() {
	class Fraction p;
	input(p);
	simplify(p);
	return 0;
}
