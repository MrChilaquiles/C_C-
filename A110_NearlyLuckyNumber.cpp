#include <iostream>
using namespace std;

int main() {
    bool lucky;
    string num;
    cin >> num;

    for (int i = 0; i < num.length(); i++) {
        if (num[i] == '4' || num[i] == '7') {
            lucky = true;
        } else {
            lucky = false;
            break;
        }
    }
    
    if (lucky == true) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    
    
}