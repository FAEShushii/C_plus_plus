#include<iostream>
#include<algorithm>
#define sz(a) int((a).size())
#define all(x) x.begin(), x.end()
#define FOR(i,a,b) for(int i = a ; i < b ; i++)
using namespace std;
int main() {
    int t ;
    cin >> t;
    cin.ignore();
    while (t--) {
        string s; 
		cin >> s;
        string kq;
        int n = sz(s);
        FOR(i,0,n)
            s[i] = toupper(s[i]);
        FOR(i,0,n) {
            if (s[i] == 'A' || s[i] == 'B' || s[i] == 'C')
                kq += '2';
            else if (s[i] == 'D' || s[i] == 'E' || s[i] == 'F')
                kq += '3';
            else if (s[i] == 'G' || s[i] == 'H' || s[i] == 'I')
                kq += '4';
            else if (s[i] == 'J' || s[i] == 'K' || s[i] == 'L')
                kq += '5';
            else if (s[i] == 'M' || s[i] == 'N' || s[i] == 'O')
                kq += '6';
            else if (s[i] == 'P' || s[i] == 'Q' || s[i] == 'R' || s[i] == 'S')
                kq += '7';
            else if (s[i] == 'T' || s[i] == 'U' || s[i] == 'V')
                kq += '8';
            else
                kq += '9';
        }
        string kq1 = kq; 
		reverse(all(kq1));
        if (kq1 == kq) 
			cout << "YES\n";
        else cout << "NO\n";
    }
    return 0 ;
}
