#include<bits/stdc++.h>
#define present(t, x) (t.find(x) != t.end())
using namespace std;

set<string> convert(string s){
	stringstream ss(s);
	string tmp;
	set<string> se;
	while(ss >> tmp){
		se.insert(tmp);
	}
	return se;
}

int main(){
    int t ;
    cin >> t;
    cin.ignore();
    while(t--){
        string s, t;
        getline(cin, s);
        getline(cin, t);
        set<string> s1 = convert(s);
        set<string> s2 = convert(t);
        for(string x : s1){
			if(!present(s2, x)){
				cout << x << " ";
			}
		}
		cout<<endl;
    }
    return 0;
}
