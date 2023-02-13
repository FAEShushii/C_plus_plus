#include<bits/stdc++.h>
using namespace std;

class Examinee{
    public:
        string ten ,pgd;
        int luong , ngay ;
};

void xuly(Examinee &A){
    int res = A.luong*A.ngay ;
    cout << res << " " ;
    if(A.ngay>=25) { cout << res/5 << " " ; 
    res += res/5; }
        else if(A.ngay >=22) 
            { cout << res/10 << " " ; 
                res += res/10 ; }
            else cout << "0 " ;
    if(A.pgd=="PGD") {cout << "200000 " ; 
                    res += 200000; }
        else if(A.pgd=="GD") {cout << "250000 " ; 
                                res += 250000; }
            else if(A.pgd=="TP") {cout << "180000 " ; 
                            res += 180000; }
                else {cout << "150000 " ; 
                    res += 150000; }
    cout << res ;
}
int main() {
    class Examinee A ;
    getline(cin,A.ten);
    cin >> A.luong >> A.ngay >> A.pgd ;
    cout << "NV01 " << A.ten << " " ;
    xuly(A);
    return 0 ;
}