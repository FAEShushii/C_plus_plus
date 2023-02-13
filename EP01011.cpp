#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int a,b;
	int sum =0;
	cin>>a>>b;
	for (int i=a; i<=b; i++){
		float c = sqrt(i);
		if (c == (int) c){
			sum += i;
		}
	}
	cout<<sum;
}
