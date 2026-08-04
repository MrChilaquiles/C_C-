#include <iostream>
using namespace std;

int main() {
    int n, ocurrence = 0, agents = 0;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int m;
        cin >> m;

        if (m == -1 && agents <= 0) {
            ocurrence++;
        } else {
            agents += m;
        }
    }

    cout << ocurrence;

    return 0;
}