#include <iostream>
using namespace std;

int main() {
    int n, A = 0, D = 0;
    string score;
    cin >> n;
    cin >> score;

    for (int i = 0; i < score.length(); i++) {
        if (score[i] == 'A') {
            A++;
        } else {
            D++;
        }
    }
    
    if (A == D) {
        cout << "Friendship";
    } else if (A > D) {
        cout << "Anton";
    } else {
        cout << "Danik";
    }
}