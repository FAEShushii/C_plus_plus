#include<iostream>
using namespace std;
typedef unsigned long long ull;
const int MOD = (int) 1e9+7;
int main() {
    int t;
    cin>>t;
    while(t--){
        ull n , k ,res = 0 , i = 1 ;
        cin >> n >> k ;
        while (k!=0){
			if(k&1) 
				res=(res+i) % MOD;
			i= i * n % MOD; 
			k>>=1;
        }
        cout << res << endl;
    }
    return 0;
}

