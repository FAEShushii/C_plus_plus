#include <iostream>
#include <cmath>
#include<iomanip>
#include <algorithm>
using namespace std;
class Diem{
	public:
     	double x,y ;
};

double distance(Diem A , Diem B){
    double d = sqrt((A.x-B.x)*(A.x-B.x)+(A.y-B.y)*(A.y-B.y));
    return d ;
}
void input(Diem &A){
    cin >> A.x >> A.y ;
}
int main(){
    struct Diem A, B;
    int t;
    cin>>t;
    while(t--){
    	input(A); input(B);
    	cout << fixed << setprecision(4) << distance(A,B) << endl;
	}
	return 0;
}
