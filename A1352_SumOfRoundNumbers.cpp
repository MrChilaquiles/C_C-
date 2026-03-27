#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    int t = 0;

    cin >> t;
    cin.ignore();

    for (int i = 0; i < t; i++) {
        string n;
        getline(cin, n);

        int count = 0;
        vector<long long> parts;

        for (int j = 0; j < n.size(); j++) {
            if (n[j] != '0') {
                int digit = n[j] - '0';
                long long pow = 1;

                for (int e = 0; e < ((n.size() - j) - 1); e++) pow *= 10;
                
                parts.push_back(digit * pow);
                count ++;
            }
        }

        cout << count << endl;
        for (auto p : parts) cout << p << " ";
        cout << "\n";
    }
    
    return 0;
}