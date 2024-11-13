#include <iostream>
using namespace std;

int main() {
    int len = 0;
    string num;
    cin >> num;

    for (int i = 0; i < num.length(); i++) {
        if (num[i] == '4' || num[i] == '7') {
            len++;
        }
    }

    if (len == 4 || len == 7) {
        cout << "YES";
    } else {
        cout << "NO";
    }
}