#include<iostream>
#include <iomanip>
#include<cmath>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int i, n;
		double S;
		cin>>n;
		i = 1;
		S = 0;
		while(i <= n){
			S = sqrt(i + S);
			i++;
		}
  		cout << fixed << setprecision(5) << S << '\n';
	}
}
