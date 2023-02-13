#include<bits/stdc++.h>
using namespace std;
struct Item {
    string name;
    string group;
    long double mua;
    long double ban;
    int id;
};

bool compare( Item& a,  Item& b) {
    long double profita = a.ban - a.mua;
    long double profitb = b.ban - b.mua;
    return profita > profitb;
}


int main()
{
    int t;
    cin >> t;
    struct Item itemlist[t];
    for (int i = 0; i < t; i++) {
        getline(cin >> ws, itemlist[i].name);
        getline(cin >> ws, itemlist[i].group);
        cin >> itemlist[i].mua >> itemlist[i].ban;
        itemlist[i].id = i+1;
    }
    sort(itemlist, itemlist + t, compare);
    for (int i = 0; i < t; i++) {
        cout << itemlist[i].id << " " << itemlist[i].name << " " << itemlist[i].group << " " << setprecision(2) << fixed << (itemlist[i].ban - itemlist[i].mua) << endl;
    }
    return 0;
}