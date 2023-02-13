#include <bits/stdc++.h>
using namespace std;
struct Employee {
    string s ,ss,sss;
    string z ,zz, zzz;
};

void input(Employee &X){
    getline(cin >> ws,X.s);
    getline(cin >> ws,X.ss);
    getline(cin >> ws,X.sss);
    getline(cin >> ws,X.z);
    getline(cin >> ws,X.zz);
    getline(cin >> ws,X.zzz);
}

void printlist(Employee lst[], int n) {
    int d = 1 ;
	for (int i = 0; i < n; i++) {
            cout << "000" ;
            if(d>=10) cout << d; else cout << "0" << d ;
            cout <<" " << lst[i].s << " " << lst[i].ss << " " << lst[i].sss ;
            cout << " " << lst[i].z << " " << lst[i].zz << " " << lst[i].zzz;
            cout << endl;
            d++;
	}
}
int main(){
    struct Employee lst[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) input(lst[i]);
    printlist(lst,N);
    return 0;
}