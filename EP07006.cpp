#include <iostream>
#include<cmath>
#include<iomanip>
using namespace std;
class Point{
    public:
     double x,y ;
};

double distance(Point A , Point B){
    double d = sqrt((A.x-B.x)*(A.x-B.x)+(A.y-B.y)*(A.y-B.y));
    return d ;
}
void input(Point &A){
    cin >> A.x >> A.y ;
}
double findArea(double a, double b, double c)
{
    if (a < 0 || b < 0 || c < 0 ||
       (a + b <= c) || a + c <= b ||
                       b + c <= a)
    {
        exit(0);
    }
    double s = (a + b + c) / 2;
    return sqrt(s * (s - a) *
                    (s - b) * (s - c));
}
void Sol(Point &A , Point &B , Point &C){
    if(distance(A,B)+distance(B,C)<=distance(C,A)||distance(A,B)>=distance(B,C)+distance(C,A)||distance(B,C)>=distance(A,B)+distance(C,A)) cout << "INVALID" << endl;
    else {
        double res = distance(B,C);
        double pos = distance(A,B);
        double wal = distance(A,C);
        double d = findArea(res,pos,wal);
        cout << fixed << setprecision(2) << d << endl;
    }
}
int main(){
    class Point A, B,C;
    int t;
    cin>>t;
    while(t--){
        input(A); input(B),input(C);
        Sol(A,B,C) ;
    }
    return 0;
}