#include <iostream>
#include <string.h>
using namespace std;

int main() {
    int n, t;
    string s;
    cin >> n >> t;
    cin >> s;

    for (int i = 0; i < n; i++) {
        if (s[i] == 'B' && s[i + t] != 'B') {
            s[i] = 'G';
            if (i + t >= n) {
                s[n - 1] = 'B';
            } else {
                s[i + t] = 'B';
            }
            i = i + t;
        }
    }
    
    cout << s;
}