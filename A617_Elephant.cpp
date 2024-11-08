#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;
    int b = a / 5;

    if (a % 5 != 0) {
        b = b + 1;
    }

    cout << b;
}