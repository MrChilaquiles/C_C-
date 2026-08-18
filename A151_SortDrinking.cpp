#include <iostream>
using namespace std;

int main() {
    int n, k, l, c, d, p, nl, np, min;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    min = (k * l) / nl;
    if (c * d < min) min = c * d;
    if (p / np < min) min = p / np;

    cout << min / n << endl;

    return 0;
}