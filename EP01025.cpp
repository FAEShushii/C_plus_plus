#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    float a, b;
    char op;

    cin >> a >> op >> b;

    switch (op) {
        case '+': {
            cout << setprecision(2) << fixed << a + b;
            break;
        }

        case '-': {
            cout << setprecision(2) << fixed << abs(a - b);
            break;
        }

        case '*': {
            cout << setprecision(2) << fixed << a * b;
            break;
        }

        case '/': {
            cout << setprecision(2) << fixed << a / b;
            break;
        }
    }
}
