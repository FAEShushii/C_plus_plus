#include <iostream>
#include<cmath>
using namespace std;
#define FOR(i,a,b) for(int i = a ; i <= b ; i++)
unsigned int UCLN(unsigned int a, unsigned int b) {
   if(a==b)
      return a;
   else
      if(a>b)
         return UCLN(a-b,b);
      else
         return UCLN(a,b-a);
}
unsigned int UCLN(int a[], unsigned int n) {
   unsigned int temp;
   if(n==1)
      return abs(a[0]);
   else
   {
      temp = abs(a[0]);
      for(unsigned int i = 1; i<n; i++)
         temp = UCLN(temp, abs(a[i]));
   }
   return temp;
}

int main() {
    int t;
    cin >> t;
    while(t--){
        int m  ;
        cin >> m ;
        int a[100][100];
        FOR(i,1,m)
            FOR(j,1,m) cin >> a[i][j];
        FOR(i,1,m){
            FOR(j,1,m){
                if(i==1||i==m||j==1||j==m) cout << a[i][j] << " " ;
                else cout << "  ";
            }
            cout << endl;
        }
    }

    return 0 ;
}
