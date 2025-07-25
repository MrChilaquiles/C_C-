#include <iostream>
using namespace std;

int main() {
    int k, l, m, n, d, damDragons;
    cin >> k >> l >> m >> n >> d;
    damDragons = d;

    if (k != 1 && l != 1 && m != 1 && n != 1) {
        for (int i = 0; i < d; i++) {
            if (((i + 1) % k) != 0 && ((i + 1) % l) != 0 && ((i + 1) % m) != 0 && ((i + 1) % n) != 0) {
                damDragons--;
            }
        }
    }

    cout << damDragons;
    return 0;
}