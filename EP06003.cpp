#include <iostream>
#include <iomanip>
using namespace std;
struct ThiSinh{
    string s ,ss;
    double x,y,z,d ;
};

void nhap(ThiSinh &X){
    getline(cin,X.s);
    getline(cin,X.ss);
    cin >> X.x >> X.y >> X.z ;
    X.d = X.x + X.y +X.z ;
}

void in(ThiSinh &X){
    cout << X.s << " " << X.ss << " " << fixed << setprecision(1) << X.d << endl;
}
int main(){
    struct ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}
