#include <iostream>
using namespace std;

int main(){
	int a;
	cin>>a;
	for (int i=1;i <=a; i++){
		int n;
		cin>>n;
		int coin =0;
		while (n >=1000){
			n = n -1000;
			coin++;
		}
		while (n >=500){
			n= n-500;
			coin++;
		}
		while (n >= 200){
			n = n -200;
			coin++;
		}
		while (n >= 100){
			n = n- 100;
			coin++;
		}
		while (n >= 50){
			n = n- 50;
			coin++;
		}
		while (n >= 20){
			n -= 20;
			coin++;
		}
		while (n >= 10){
			n -= 10;
			coin++;
		}
		while (n >= 5){
			n -= 5;
			coin++;
		}
		while (n >= 2){
			n -= 2;
			coin++;
		}
		while (n >= 1){
			n -= 1;
			coin++;
			break;
		}
		cout<<coin;
		cout<<"\n";
	}
}
