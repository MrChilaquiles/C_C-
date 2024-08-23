#include <iostream>
using namespace std;

int main() {
    int n, count, pSoulving = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int numbers[3];
        count = 0;
        for (int j = 0; j < 3; j++) {
            cin >> numbers[j];
            count += numbers[j];
        }
        if (count >= 2) {
            pSoulving ++;
        }
    }
    cout << pSoulving;
    return 0;
}
