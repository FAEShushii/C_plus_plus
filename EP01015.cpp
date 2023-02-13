#include <iostream>
#include <cmath>
using namespace std;

int main (){
	int t;
	cin>>t;
	for (int i=1; i<=t;i++){
		long long n;
		cin>>n;
		long long temp;
		temp = n;
		int sum=0;
		int mark =0;
		while (n > 0){
			sum += n %10;
			n/=10;
		}
		for (int a=2; a<= sqrt(sum); a++){
			if (sum % a==0){
				mark =1;
				break;
			}
		}
		if (mark == 1){
			cout<<"-1";
		} else if (mark ==0) {
			cout<<temp;
		}
		cout<<"\n";
	}
}
