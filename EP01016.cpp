#include<iostream>
using namespace std;

int main(){
	int t;
	cin>>t;
	for (int i=1; i<=t; i++){
		long long n;
		int sum=0;
		int sum1=0; 
		int sum2 =0;
		cin>>n;;
		while (n>0){
			sum += n%10;
			n/=10;
		}
			if (sum <10){
				cout<<sum;
			}
			if (sum >= 10){
				while (sum){
					sum1 += sum %10;
					sum/=10;
				}
				if (sum1<10){
					cout<<sum1;
				} else {
					while (sum1){
						sum2 += sum1%10;
						sum1/=10;
					}
					cout<<sum2;
				}
			}
			cout<<"\n";	
		}
}
