#include <iostream>

using namespace std;

int main() {
    int t, a, b, c;
    cin >> t;

    for (int i = 0; i < t; i++) {
        cin >> a >> b >> c;
        cout << ((a == (b + c) || b == (a + c) || c == (a + b)) ? "YES" : "NO") << endl;
    }
    
    return 0;
}