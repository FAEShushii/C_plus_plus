#include<bits/stdc++.h>
using namespace std;
int main() {
    freopen("PTIT.in", "r", stdin);
    freopen("PTIT.out", "w", stdout);
    string s;
    while (getline(cin,s)) {
        int kq = 0;
        try {
            cout << s << endl;
            kq = 1;
        }
        catch(...) {
			kq = 0;
		}
    }
    return 0 ;
}  