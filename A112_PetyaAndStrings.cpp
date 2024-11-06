#include <iostream>
using namespace std;

int main() {
    string A, B;
    cin >> A >> B;
    
    for (int i = 0; i < A.length(); i++) {
        A[i] = tolower(A[i]);
        B[i] = tolower(B[i]);
    }
    
    if (A < B) {
        cout << -1;
    } else if (A > B) {
        cout << 1;
    } else {
        cout << 0;
    }
}