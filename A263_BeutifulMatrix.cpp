#include <iostream>
using namespace std;

int main() {
    int mat[5][5], x = 0, y = 0, count = 0;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> mat[i][j];
            if (mat[i][j] == 1) {
                y = i;
                x = j;
            }
        }
    }
    
    while (x != 2 || y != 2) {
        if (x > 2) {
            x--;
            count++;
        } else if (x < 2) {
            x++;
            count++;
        }
        
        if (y > 2) {
            y--;
            count++;
        } else if (y < 2) {
            y++;
            count++;
        }
    }
    cout << count;
}