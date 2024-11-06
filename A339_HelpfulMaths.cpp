#include <iostream>
using namespace std;

int main() {
    int n1 = 0, n2 = 0, n3 = 0;
    string sum;
    cin >> sum;

    for (int i = 0; i < sum.length(); i++) {
        n1 = (sum[i] == 1) ? n1++ : n1;
        n2 = (sum[i] == 2) ? n2++ : n2;
        n3 = (sum[i] == 3) ? n3++ : n3;
    }
    if (n1 > 0) {
        for (int i = 0; i < n1; i++) {
            cout << 1;
        }
    }
    if (n2 > 0) {
        for (int i = 0; i < n1; i++) {
            cout << 2;
        }
    }
    if (n3 > 0) {
        for (int i = 0; i < n1; i++) {
            cout << 3;
        }
    }
}