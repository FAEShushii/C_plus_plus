#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        int sum = 0;
        cin >> n >> k;
        for (int i = 1; i <= n; i++) {
            sum = sum + i % k;
        }
    cout << sum << endl;
    }
}
