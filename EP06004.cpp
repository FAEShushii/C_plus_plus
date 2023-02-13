#include<iostream>
#include<iomanip>
using namespace std;
struct SinhVien {
    string s ,ss,sss;
    double x,y,z,d ;
};

void in(SinhVien  &X){
    getline(cin,X.s);
    getline(cin,X.ss);
    getline(cin,X.sss);
    cin >> X.x  ;
}

void Xulyngaysinh(string s){
    if(s[1]=='/') s.insert(0,1,'0');
	if(s[4]=='/') s.insert(3,1,'0');
	cout << s ;
}

void nhap(SinhVien  &X){
    cout << "B20DCCN001"<<" " ;
    cout << X.s << " " << X.ss << " " ;
    Xulyngaysinh(X.sss);
    cout << " " << fixed << setprecision(2) << X.x << endl;
}

int main(){
    struct SinhVien a;
    in(a);
    nhap(a); 
    return 0;
}
