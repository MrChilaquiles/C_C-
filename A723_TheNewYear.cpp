#include <iostream>
using namespace std;

int main() {
    int a, b, c, aux;
    cin >> a >> b >> c;

    if (a < b) {
        aux = b;
        b = a;
        a = aux;
    }
    
    if (b < c) {
        aux = c;
        c = b;
        b = aux;
    }
    
    if (a < b) {
        aux = b;
        b = a;
        a = aux;
    }
    
    cout << ((a-b) + (b - c));

    return 0;
}