#include <iostream>
using namespace std;

int main() {
    int n, k, count = 0;
    cin >> n;
    cin >> k;
    int score[n];
    for (int i = 0; i < n; i++) {
        cin >> score[i];
    }
    k = score[(k - 1)];
    for (int i = 0; i < n; i++){
        if (score[i] >= k && score[i] > 0) {
            count++;
        }
    }
    cout << count;
}