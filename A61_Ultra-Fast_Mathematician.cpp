#include <iostream>
using namespace std;

int main() {
    string n1, n2, result;
    cin >> n1 >> n2;

    for (int i = 0; i < n1.size(); i++) {
        if (n1[i] != n2[i]) {
            result.push_back('1');
        } else {
            result.push_back('0');
        }
    }
    
    cout << result;
}