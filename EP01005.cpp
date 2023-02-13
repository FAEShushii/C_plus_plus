#include <cmath>
#include <iostream>	
using namespace std;

bool isSphenicNumber(int n) {
    int checked = 0;
    for (int s = sqrt(n), i = 2; i <= s; ++i) {
        if (n % i == 0) 
			n /= i, checked++;
        if (n % i == 0) 
			return false; 
    }
    if (n != 1) 
	checked++;
    return checked == 3;
}

int main() {
	int n;
	cin>>n;
	while(n--){
		int a;
		cin>>a;
		if(isSphenicNumber(a))
			cout<<"1\n";
		else cout<<"0\n";
	}
}
