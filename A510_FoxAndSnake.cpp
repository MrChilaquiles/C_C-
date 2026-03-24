#include <iostream>

using namespace std;

int main() {
    int n, m, hole;
    bool right = true;

    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        if ((i % 2) != 0) {
            hole = right ? m-1 : 0;
        }
        
        for (int j = 0; j < m; j++) {
            if ((i % 2) != 0) {
                if (hole == j) {
                    cout << "#";
                    continue;
                }
                
                cout << ".";
                continue;
            }
            
            cout << "#";
        }

        if ((i % 2) != 0) {
            right = !right;
        }
        
        cout << endl;
    }
}