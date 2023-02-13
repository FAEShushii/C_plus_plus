#include<iostream>
#include<string.h>
using namespace std;
 int main(){
	int n;
	cin>>n;
	while(n--){	
         char a;
         cin>>a;
         if ( (a >= 'A') && (a <= 'Z') )
         {
                int k =  int (a) + 32 ;
                cout<< char(k);
         }
         else if ( (a >= 'a') && (a<= 'z') )
         {
                int k = int (a) - 32;
                cout<< char(k);
         }
         cout<< endl;
    }
}
