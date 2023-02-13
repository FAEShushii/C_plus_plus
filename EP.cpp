#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    ll g1 = abs(d - c);
    ll g2 = abs(b - c);
    ll g3 = abs(a - b);
    cout << __gcd(g1, __gcd(g2, g3));
}
