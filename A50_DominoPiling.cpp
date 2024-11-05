#include <iostream>
using namespace std;
int main() {
    int m, n, squares, score = 0;
    cin >> m >> n;
    squares = m * n;
    while(squares > 1) {
        squares -= 2;
        score++;
    }
    cout << score;
} 