#include <iostream>
using namespace std;
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL);cout.tie(NULL);  
bool checkPrime(int n) {
    if (n <= 1)
        return false;

    if (n <= 3)
        return true;

    if (n % 2 == 0 || n % 3 == 0)
        return false;

    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }
    return true;
}

int main() {
    faster();
    int input;
    cin >> input;
    while (input--) {
        int n;
        bool check = false;
        int a, b, tmp, x;
        cin >> n;

        for (int i = 2; i <= n / 2; i++) {
            if (checkPrime(i) == true) {
                x = i;
                tmp = n - i;
                if (checkPrime(tmp) == true) {
                    check = true;
                    break;
                }
            }
        }

        if (check == true)
            cout << x << " " << tmp << endl;
        else
            cout << "-1" << endl;
    }
}
