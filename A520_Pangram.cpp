#include <iostream>
#include <cctype>
using namespace std;

int main() {
    int n;
    string letters;
    bool seen[26] = {false};
    cin >> n >> letters;

    if (n < 26) {
        cout << "NO";
        return 0;
    }

    for (char c : letters) {
        c = tolower(c);
        if ('a' <= c && c <= 'z') {
            seen[c - 'a'] = true;
        }
    }

    for (int i = 0; i < 26; ++i) {
        if (!seen[i]) {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}