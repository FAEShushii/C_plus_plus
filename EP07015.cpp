#include <bits/stdc++.h>
using namespace std;

class Examinee{
    public:
        string ten ,msv;
        int luong , ngay ;
};

void xuly(Examinee &A){
    int res = 0 ; 
    if(A.msv[2]=='0') { cout << A.msv[3] << " " ;  res += A.msv[3] - '0'; }
    else { 
            cout << A.msv[2] << A.msv[3] << " " ;
            res += (A.msv[2]-'0')*10 + (A.msv[3] - '0');
    }
    res = res*A.luong ;
    if(A.msv[0]=='H'&& A.msv[1]=='T') { cout << "2000000 " ; res += 2000000;}
        else if(A.msv[0]=='H'&& A.msv[1]=='P') { cout << "900000 " ; res += 900000;}
            else { cout << "500000 " ; res += 500000;}
    cout << res ;
}
int main() {
    class Examinee A ;
    getline(cin,A.msv);
    getline(cin,A.ten);
    cin >> A.luong ;
    cout << A.msv << " " << A.ten << " " ;
    xuly(A);
    return 0 ;
}