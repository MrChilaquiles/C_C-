#include <iostream>
#include <set>
using namespace std;

int main() {
    int n, littleX, littleY;
    set<int> levels;
    cin >> n;
    

    cin >> littleX;
    for (int i = 0; i < littleX; i++) {
        int level;
        cin >> level;
        levels.insert(level);
    }

    cin >> littleY;
    for (int i = 0; i < littleY; i++) {
        int level;
        cin >> level;
        levels.insert(level);
    }
    
    if (levels.size() == n) {
        cout << "I become the guy.";
    } else {
        cout << "Oh, my keyboard!";
    }
    
    return 0;
}