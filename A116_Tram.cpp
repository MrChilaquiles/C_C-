#include <iostream>
using namespace std;

int main() {
    int n, a = 0, b = 0, passangers = 0, minCapacity = 0;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        passangers += (b - a);
        if (passangers > minCapacity) {
            minCapacity = passangers;
        }
    }
    
    cout << minCapacity;
}