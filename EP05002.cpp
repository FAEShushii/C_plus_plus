#include<bits/stdc++.h>
using namespace std;
typedef long long ll;   
int main() {
    ifstream input1("DATA.in");
    ll ans = 0;
    string s;
    while (input1 >> s) {
        int kq = 0, a;
        try {
            a = stoi(s);
            kq = 1;
        }
        catch(...) {
			kq = 0;
		}

        if (kq) ans += a;
    }
    cout << ans;
    return 0 ;
}