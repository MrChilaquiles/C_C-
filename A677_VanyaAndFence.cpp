#include <iostream>
using namespace std;

int main() {
    int n, h, minWeight = 0;
    cin >> n >> h;
    int a[n];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] > h) {
            minWeight += 2;
        } else {
            minWeight++;
        }
    }
    
    cout << minWeight;
}