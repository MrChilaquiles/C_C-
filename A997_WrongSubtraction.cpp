#include <iostream>
#include <vector>
using namespace std;

int main() {
    int num, times;
    cin >> num >> times;

    for (int i = 0; i < times; i++) {
        if ((num % 10) == 0) {
            num /= 10;
        } else {
            num--;
        }
    }
    
    cout << num;
}