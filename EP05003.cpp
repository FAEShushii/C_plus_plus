#include<bits/stdc++.h>
using namespace std;
typedef long long ll; 
#define FOR(i,a,b) for(int i = a ; i < b ; i++)
int main() {
    ifstream input1("DATA.in");
    ll ans = 0;
    int s , max = 1 ;
    map<int, int > mp;
    while (input1 >> s) {
        int kq = 0, a;
        try {
            mp[s]++;
            kq = 1;
            if(s>max) max = s ;
        }
        catch(...) {
			kq = 0;
		}
    }
    FOR(i,0,max+1) {
        if(mp[i]) cout << i << " " << mp[i] << endl;
    }
    return 0 ;
}