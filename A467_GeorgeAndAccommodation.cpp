#include <iostream>
using namespace std;     

int main() {
    int n, p, q, rooms = 0;
    cin >> n;
    for(int i =0; i < n; i++) {
        cin >> p >> q;
        if(p < q && (q - p) >= 2) {
            rooms++;
        }
    }
    cout << rooms;
}