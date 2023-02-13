#include <iostream>
using namespace std;
long long tinh(int n){
	long long F[n+1];
	int i, j, M= 1e9+7;
	F[0]=F[1]=1;
	for(i=2; i<=n; i++){
		F[i]=0;
		for(j=0;j<i;j++){
			F[i] += F[j] *F[i-j-1];
			F[i] %= M;
		}
	}
	return F[n];
}
main(){
	int n;
	cin>>n;
	cout<<tinh(n/2);
}
