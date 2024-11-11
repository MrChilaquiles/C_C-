#include <iostream>
using namespace std;

int main() {
    int cost, money, nBanana, total = 0;
    cin >> cost >> money >> nBanana;
    
    for (int i = 1; i < nBanana + 1; i++) {
        total += cost * i;
    }

    if (total > money) {
        cout << total - money;
    } else {
        cout << 0;
    }
}