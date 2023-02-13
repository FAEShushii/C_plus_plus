#include<bits/stdc++.h>
using namespace std;
struct nguoi {
    string id;
    string ten;
    string lop;
    string email;
    string corp;
    int index;
};

bool comp(nguoi a, nguoi b) {
    return a.id < b.id;
}


int main()
{
    int t; cin >> t;
    struct nguoi list[t];
    for (int i = 0; i < t; i++) {
        cin >> list[i].id;
        getline(cin >> ws, list[i].ten);
        cin >> list[i].lop >> list[i].email >> list[i].corp;
        list[i].index = i+1;
    }
    sort(list, list+t, comp);
    int q; 
    cin >> q;
    while (q--) {
        string query; 
        cin >> query;
        for (int i = 0; i < t; i++) {
            if (list[i].corp == query) {
                cout << list[i].index << " " << list[i].id << " " << list[i].ten << " " << list[i].lop << " " << list[i].email << " " << list[i].corp << endl;
            }
        }
    }
    return 0;
}