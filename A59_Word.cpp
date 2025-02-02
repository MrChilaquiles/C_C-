#include <iostream>
#include <ctype.h>
using namespace std;

int main() {
    int lower = 0, upper = 0;
    string s;
    cin >> s;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            lower++;
        } else if (s[i] >= 'A' && s[i] <= 'Z') {
            upper++;
        }
    }
    
    if (lower >= upper) {
        for (int i = 0; i < s.length(); i++) {
            if (s[i] >= 'A' && s[i] <= 'Z') {
                s[i] += 32;
            }
        }
    } else {
        for (int i = 0; i < s.length(); i++) {
            if (s[i] >= 'a' && s[i] <= 'z') {
                s[i] -= 32;
            }
        }
    }
    
    cout << s;
}