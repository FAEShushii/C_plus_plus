#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long int
struct Item {
    ull gio,phut,giay ;
};

bool cmp( Item& a,  Item& b) {
    ull suma = a.gio*3600 + a.phut *60 + a.giay ;
    ull sumb = b.gio*3600 + b.phut *60 + b.giay ;
    return suma < sumb ;
}

int main()
{
    int t;
    cin >> t;
    struct Item a[t];
    for (int i = 0; i < t; i++) {
        cin >> a[i].gio >> a[i].phut >> a[i].giay ;
    }
    sort(a,a+t,cmp);
    for (int i = 0; i < t; i++){
        cout << a[i].gio << " " << a[i].phut << " " << a[i].giay << endl;
    }
}