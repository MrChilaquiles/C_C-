#include <iostream>
using namespace std;

int main() {
    int bigger;
    bool translate;
    string berlandish, birlandish;
    cin >> berlandish;
    cin >> birlandish;

    bigger = (berlandish.length() > birlandish.length()) ? berlandish.length() : birlandish.length();
    for (int i = 0; i < bigger; i++) {
        if (berlandish[i] == birlandish[(birlandish.length() - 1) - i]) {
            translate = true;
        } else {
            translate = false;
            break;
        }
    }
    
    if (translate == true) {
        cout << "YES";
    } else {
        cout << "NO";
    }   
}