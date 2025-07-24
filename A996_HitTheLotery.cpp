#include <iostream>
using namespace std;

int main() {
    int n, bills = 0;
    cin >> n;

    while (n != 0) {
        if ((n - 100) >= 0) {
            n -= 100;
            bills++;
        } else if ((n - 20) >= 0) {
            n -= 20;
            bills++;
        } else if ((n - 10) >= 0) {
            n -= 10;
            bills++;
        } else if ((n - 5) >= 0) {
            n -= 5;
            bills++;
        } else {
            n -= 1;
            bills++;
        }
    }

    cout << bills;
    return 0;
}