#include <iostream>
using namespace std;

int n;
int a[91];

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    a[0] = 0;
    int i = 1;

    while (a[i] - a[i - 1] <= 15 && i <= n) {
        i++;
    }

    cout << min(a[i - 1] + 15, 90);

    return 0;
}
