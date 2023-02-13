#include<bits/stdc++.h>
using namespace std;
class complexx{
    public:
    int x,y;
};
void tich(complexx &A,complexx &B){
    class complexx C ;
    C.x = A.x+B.x;
    C.y = A.y+B.y ;
    int res = C.x * A.x - C.y * A.y;
    int pos = C.x * A.y + C.y * A.x ;
    cout << res << " ";
    if(pos>0) cout << "+ " << pos << "i, ";
    else cout << "- " << abs(pos) << "i, ";
}
void binhphuong(complexx &A,complexx &B){
    class complexx C ;
    C.x = A.x+B.x;
    C.y = A.y+B.y ;
    int res = C.x * C.x - C.y * C.y;
    int pos = C.x * C.y + C.y * C.x ;
    cout << res << " ";
    if(pos>0) cout << "+ " << pos << "i\n";
    else cout << "- " << abs(pos) << "i\n";
}
int main() {
    int n;
    cin>>n;
    while(n--){
        class complexx A,B;
        cin >> A.x >> A.y >> B.x >> B.y ;
        tich(A,B);
        binhphuong(A,B);
    }
    return 0 ;
}
