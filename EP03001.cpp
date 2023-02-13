#include <bits/stdc++.h>
using namespace std;
int main(){
	    int t ;
    cin >> t;
    cin.ignore();
    while(t--){
        string s ;
        cin >> s ;
        map<char, int> cnt;
        for(char x : s){
            cnt[x]++;
        }
        for(char x : s){
            if(cnt[x]==1) cout << x ;
        }
        cout << endl;
    }
	return 0;
}
