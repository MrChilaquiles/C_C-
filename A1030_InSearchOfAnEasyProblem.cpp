#include <iostream>
using namespace std;

int main() {
    int nPeople, answer;
    string result = "EASY";
    cin >> nPeople;

    for (int i = 0; i < nPeople; i++) {
        cin >> answer;
        if (answer == 1) {
            result = "HARD";
            break;
        }
    }
    cout << result;
}