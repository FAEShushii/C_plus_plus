#include <bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for(int i = a ; i <= b ; i++)
void print_max(int a[], int n, int k)
{
	int max_upto[n];
    stack<int> s;
    s.push(0);
    for (int i = 1; i < n; i++) {
        while (!s.empty() && a[s.top()] < a[i]) {
            max_upto[s.top()] = i - 1;
            s.pop();
        }
        s.push(i);
    }
    while (!s.empty()) {
        max_upto[s.top()] = n - 1;
        s.pop();
    }
    int j = 0;
    for (int i = 0; i <= n - k; i++) {
        while (j < i || max_upto[j] < i + k - 1)
            j++;
        cout << a[j] << " ";
    }
    cout << endl;
}


int main() {
    int t;
    cin >> t ;
    while(t--) {
        int m,n,a[100000],b[100000] ;
        cin >> m >> n ;
        FOR(i,0,m-1) cin >> a[i];
        print_max(a, m, n);
        cout << endl;
    }
    return 0 ;
}
