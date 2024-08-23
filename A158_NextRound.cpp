#include <iostream>
using namespace std;

int main() {
    int n, k, count = 0;
    cin >> n;
    cin >> k;
    int score[n];
    for (int i = 0; i < n; i++) {
        cin >> score[i];
        if (score[i] > k || score[i] == 1) {
            count++;
        }
    }
    cout << count;
}