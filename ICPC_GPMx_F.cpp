#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> tA(5);
    vector<int> tB(4);
    cin >> tA[0] >> tA[1] >> tA[2] >> tA[3] >> tA[4];
    cin >> tB[0] >> tB[1] >> tB[2] >> tB[3];
    int missingNumber = -1;
    for (int i = 0; i < 5; i++) {
        bool found = false;
        for (int j = 0; j < 4; j++) {
            if (tA[i] == tB[j]) {
                found = true;
                break;
            }
        }
        if (!found) {
            missingNumber = tA[i];
            break;
        }
    }
    cout << missingNumber;
    return 0;
}