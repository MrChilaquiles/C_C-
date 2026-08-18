#include <iostream>
using namespace std;

int main() {
    int n, min = 0, max = 0, ans = 0;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int m;
        cin >> m;
        if (i == 0) {
            max = m;
            min = m;
        }

        if (m > max) {
            max = m;
            ans++;
        } else if (m < min) {
            min = m;
            ans++;
        }
    }
    
    cout << ans;

    return 0;
}