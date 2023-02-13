#include<bits/stdc++.h>
using namespace std;
int main(){
    int t ;
    cin >> t;
    cin.ignore();
    while(t--){
        string s; cin >> s;
		int k; 
		cin >> k;
		set<char> se;
		for(char x : s){
			se.insert(x);
		}
		if(26 - se.size() <= k){
			cout << "1\n";
		}
		else cout << "0\n";
    }
	return 0;
}
