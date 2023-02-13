#include <iostream>
using namespace std;

class Point{
    public:
     int x,y ;
     string s ;
};

void solstring(string s){
    s[0]=toupper(s[0]);
    int n = s.size();
    for(int i = 1 ; i < n ; i ++) {
        s[i] = tolower(s[i]) ;
    }
    cout << s ;
}

void check(int a,int b,string s){
    if(a>0&&b>0) {
            int res = (a+b)*2;
            int pos = a*b ;
            cout << res << " " << pos << " "  ;
            solstring(s);
    }
    else cout << "INVALID" ;
}
int main()
{
    class Point vt;
    cin >> vt.x >> vt.y >> vt.s;
    check(vt.x,vt.y,vt.s) ;
    return 0;
}










