#include <iostream>
using namespace std;

long long Reverse(long long n){
	
	long long reNum= n % 10;
	n/=10;
	int last;
	while (n >0){
		last =n % 10;
		n/=10;
		reNum = reNum *10 + last;
	}
	return reNum;
}

int main(){
	long long num;
	cin>>num;
	cout<<Reverse(num);
}
