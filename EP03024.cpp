#include <bits/stdc++.h>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
int sol(string s){
    int i, dem = 1 ;
    FOR(i,1,s.size()){
        if(s[i]!=s[i-1]) dem = 1;
        else dem++;
        if(dem == 7 ) return 1;
    }
    return 0 ;
}
int main(){
	string s;
	cin >> s;
	if(sol(s)) cout << "YES" ;
	else cout << "NO";
}
