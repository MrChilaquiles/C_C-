#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    for(int i =0; i < n; i++) {
        if(((i + 1) % 2) == 0) {
            if((i + 1) == n) {
                cout << "I love it ";
            } else {
                cout << "I love that ";
            }
        } else if((i + 1) == n) {
            cout << "I hate it ";
        } else {
            cout << "I hate that ";
        }
    }
}