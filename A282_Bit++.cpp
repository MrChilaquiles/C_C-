#include <iostream>
using namespace std;

int main() {
    int n, x = 0, count = 0;
    cin >> n;
    string xUpdate;
    for (int i = 0; i < n; i++) {
        cin >> xUpdate;
        if (xUpdate == "X++" || xUpdate == "++X") {
            x++;
        } else {
            x--;
        }
    }
    cout << x;
}