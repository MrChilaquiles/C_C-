#include <iostream>

using namespace std;

int main() {
    int n, count = 0;
    cin >> n;
    int uniforms[n][2];

    for (int i = 0; i < n; i++) {
        cin >> uniforms[i][0] >> uniforms[i][1];
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            count += (uniforms[i][0] == uniforms[j][1]) ? 1 : 0;
        }
    }
    
    cout << count;
    return 0;
}