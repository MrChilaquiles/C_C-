#include <iostream>

using namespace std;

int main() {
    int n, m;
    bool right = true;

    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (i % 2 == 0) {
                cout << "#";
            } else {
                if ((right && j == m - 1) || (!right && j == 0)) {
                    cout << "#";
                } else {
                    cout << ".";
                }
            }
        }
        
        if (i % 2 != 0) {
            right = !right;
        }
        
        cout << endl;
    }
}