#include <iostream>
using namespace std;
int n, dem=1, A[2005];
void taomang(){
	for (int i=1; i<2000; i++){
		if(i%3==0|| i%10==3) continue;
		A[dem++]=i;
	}
}
main(){
	taomang();
	cin>>n;
	cout<<A[n];
}
