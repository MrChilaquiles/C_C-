#include <iostream>
using namespace std;

int main() {
    int magnets, pos, groups = 1, previus = 0;
    cin >> magnets;
    for (int i = 0; i < magnets; i++) {
        cin >> pos;
        if (previus != 0 && pos != previus) {
            groups++;
        }
        previus = pos;
    }
    cout << groups;
}