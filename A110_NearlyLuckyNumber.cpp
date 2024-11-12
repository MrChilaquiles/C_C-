#include <iostream>
using namespace std;

bool lucky(string num) {
    bool lucky;
    for (int i = 0; i < num.length(); i++) {
        if (num[i] == '4' || num[i] == '7') {
            lucky = true;
        } else {
            lucky = false;
            break;
        }
    }

    return lucky;
}
int main() {
    string num, lenght;
    cin >> num;
    lenght = to_string(num.length());

    if (lucky(lenght) == true) {
        if (lucky(num) == true) {
            cout << "YES";
        } else
        {
            cout << "NO";
        }
        
    } else {
        cout << "NO";
    }
    
    
}