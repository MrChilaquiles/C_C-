#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    string arr[n];
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++) {
        if (arr[i].size() > 10) {
            int w = arr[i].size() - 2;
            cout << arr[i][0] << w << arr[i].back() << endl;
        } else {
            cout << arr[i] << endl;
        }
    }
    return 0;
}