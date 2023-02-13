#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; 
	cin >> t;
    while (t--) {
        int n; 
		cin >> n;
        int a[n][n]; 
		int count = 0;
        map<int, int> d;
        vector<int> day;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> a[i][j];
                if (d[a[i][j]] == 0) 
					day.push_back(a[i][j]);
                if (d[a[i][j]] == i) 
					d[a[i][j]]++;
            }
        }
        for (int i = 0; i < day.size(); i++) {
            if (d[day[i]] == n) 
				count++;
        }
        cout << (count) << endl;
	}
}
