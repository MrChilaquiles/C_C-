#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double n, p, result = 0;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> p;
        result += p;
    }
    
    result /= n;
    cout << fixed << setprecision(12) << result;
}