#include <iostream>
using namespace std;

long long kiemtra(long long n){
	long long f1=1; 
	long long f0=0;
	long long fn= f1+f0;
	if (n==0){
		return 1;
	}
	while (fn<n){
		f0 =f1;
		f1 = fn;
		fn = f0+f1;
	}
	if (fn==n){
		return 1;
	}
	return 0;
}

int main(){
	int t;
	cin>>t;
	for (int i=0;i<t;i++){
		int n;
		cin>>n;
		int a[n];
		for (int j=0;j<n;j++){
			cin>>a[j];
		} 
		for (int j=0;j<n;j++){
			if (kiemtra(a[j])){
				cout<<a[j]<<" ";   
			}
		}
		cout<<"\n";
	}
}
