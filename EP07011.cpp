#include<iostream>
using namespace std;

class Examinee{
    public:
        string msv,ten ;
        double toan,ly,hoa ;

};
void tongdiem(Examinee &A){
    double d = 0 ;
    d+= A.toan*2 + A.ly + A.hoa;
    double res = d;
    switch(A.msv[2]){
    case '1':
        d+=0.5;
        cout << "0.5 " ;
        break;
    case '2':
        d+=1;
        cout << "1 " ;
        break;
    case '3':
        d+=2.5;
        cout << "2.5 " ;
        break;
    }
    cout << res << " " ;
    if(d>=24) 
		cout << "PASSED" ;  
	else cout << "FAILED";
}

int main() {
    class Examinee A ;
    getline(cin,A.msv);
    getline(cin,A.ten);
    cin >> A.toan >> A.ly >> A.hoa ;
    cout << A.msv << " " << A.ten << " " ;
    tongdiem(A);
    return 0 ;
}
