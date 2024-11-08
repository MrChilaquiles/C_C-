#include <iostream>
#include <set>
using namespace std;

int main() {
    int count = 0;
    string userN;
    set<char> uniqueC;
    cin >> userN;

    for (char c : userN) {
        uniqueC.insert(c);
    }
    
    count = uniqueC.size();
    
    if ((count % 2) == 0) {
        cout << "CHAT WITH HER!";
    } else {
        cout << "IGNORE HIM!";
    }
}