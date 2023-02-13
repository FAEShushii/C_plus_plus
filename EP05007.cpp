#include <bits/stdc++.h>
using namespace std;
#define all(x) x.begin(), x.end()
#define pb push_back
typedef long long ll;
int main(){
    ifstream input1("DATA.in");
    ll ans = 0;
    string token;
    vector<string> day;
    while (input1 >> token) {
        int kq = 0, a;
        try {
            a = stoi(token);
            kq = 1;
        }
        catch(...) {
            int kq = 0;
        }
        if (!kq) day.pb(token);
    }
    sort(all(day));
    for (int i = 0; i < day.size(); i++) {
        cout << day[i] << " ";
    }
}