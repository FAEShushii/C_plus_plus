#include <iostream>
using namespace std;

int main(){
	int t;
	cin>>t;
	for (int i=1;i<=t;i++){
		for (int j=1;j<=i*2-1;j++){
			cout<<j;
		}
		cout<<endl;
	}
}
