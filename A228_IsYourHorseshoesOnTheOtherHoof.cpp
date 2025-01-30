#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int minShoes = 0;
    vector<int> horseshoes(4);
    for (int i = 0; i < horseshoes.size(); i++) {
        cin >> horseshoes[i];
    }

    sort(horseshoes.begin(), horseshoes.end());

    for (int i = 1; i < horseshoes.size(); i++) {
        if (horseshoes[i] == horseshoes[i - 1]) {
            minShoes++;
        }
    }

    cout << minShoes << endl;

    return 0;
}