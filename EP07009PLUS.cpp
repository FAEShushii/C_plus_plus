#include <bits/stdc++.h>
using namespace std;

class complexNumber {
public:
    int real;
    int imaginary;
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        complexNumber A, B;
        cin >> A.real >> A.imaginary >> B.real >> B.imaginary;

        complex<int> a(A.real, A.imaginary), b(B.real, B.imaginary);

        complex<int> c = (a + b) * a;
        complex<int> d = (a + b) * (a + b);

        if (imag(c) > 0)
            cout << real(c) << " + " << abs(imag(c)) << "i";
        else if (imag(c) < 0)
            cout << real(c) << " - " << abs(imag(c)) << "i";
        else
            cout << real(c);

        cout << ", ";

        if (imag(d) > 0) 
            cout << real(d) << " + " << abs(imag(d)) << "i";
        else if (imag(d) < 0)
            cout << real(d) << " + " << abs(imag(d)) << "i";
        else
            cout << real(d);

        cout << endl;
    }
}
