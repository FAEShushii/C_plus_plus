#include<iostream>
#include<algorithm>
using namespace std;
struct PhanSo{
    long long int a,b ;
};

void nhap(PhanSo &X){
    cin >> X.a >> X.b ;
}
void rutgon(PhanSo &X){
    long long int d = __gcd(X.a,X.b);
    X.a = X.a/d;
    X.b = X.b/d;
}
void in(PhanSo X){
    cout << X.a << "/" << X.b;
}
int main() {
	struct PhanSo p;
	nhap(p);
	rutgon(p);
	in(p);
	return 0;
}
