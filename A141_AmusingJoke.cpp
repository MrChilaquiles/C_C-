#include <iostream>
#include <string>
using namespace std;

int main() {
    string name, name2, all;
    cin >> name >> name2 >> all;

    int count[26] = {0};

    for (char c : name) {
        count[c - 'A']++;
    }

    for (char c : name2) {
        count[c - 'A']++;
    }

    for (char c : all) {
        count[c - 'A']--;
    }

    bool ok = true;
    for (int i = 0; i < 26; i++) {
        if (count[i] != 0) {
            ok = false;
            break;
        }
    }

    if (ok) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}