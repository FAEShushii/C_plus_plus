#include <iostream>
using namespace std;

int gcd(long long a, long long b){
	if ( a==0 || b ==0){
		return a+b;
	} 
	while (a !=b){
		if (a >b){
			a = a-b;
		} else{
			b = b-a;
		}
	}
	return a;
}

int sum(long long n){
	int sum=0;
	while (n>0){
		sum += n%10;
		n/=10;
	}
	return sum;
}

int main(){
	int t;
	cin>>t;
	while (t--){
		long long n;
		cin>>n;
		for(int i=n;;i++){
			long long a= sum(i);
			int b= gcd(i,a);
			if (b>1){
				cout<<i;
				break;
			}
		}
		cout<<"\n";
	}
}
