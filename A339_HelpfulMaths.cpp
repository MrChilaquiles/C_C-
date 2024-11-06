#include <iostream>
using namespace std;

int main() {
    int n1 = 0, n2 = 0, n3 = 0;
    string sum;
    cin >> sum;

    for (int i = 0; i < sum.length(); i++) {
        if (sum[i] == '+') {
            continue;
        } else if (sum[i] == '1') {
            n1++;
        } else if (sum[i] == '2') {
            n2++;
        } else if (sum[i] == '3') {
            n3++;
        }
    }

    for (int i = 0; i < sum.length(); i++) {
        if ((i % 2) != 0) {
            cout << '+';
        } else if (n1 > 0) {
            cout << '1';
            n1--;
        } else if (n2 > 0) {
            cout << '2';
            n2--;
        } else if (n3 > 0) {
            cout << '3';
            n3--;
        }
    }
}