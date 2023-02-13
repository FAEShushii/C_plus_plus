#include <bits/stdc++.h>
using namespace std;
struct nguoi {
    string ten;
    int ngay;
    int thang;
    int nam;
};
int main()
{
    int t; cin >> t;
    struct nguoi nguois[t];
    for (int i = 0; i < t; i++) {
        cin >> nguois[i].ten;
       	scanf("%d/%d/%d", &nguois[i].ngay, &nguois[i].thang, &nguois[i].nam);
    }
    sort(nguois, nguois + t, [](nguoi a, nguoi b) {
        if (a.nam != b.nam) return a.nam < b.nam;
        if (a.thang != b.thang) return a.thang < b.thang;
        return a.ngay < b.ngay;
    });
    cout << nguois[t-1].ten << endl << nguois[0].ten << endl;
}
