#include <iostream>
#include <string>

using namespace std;

int main() {
    int n = 0;
    int totalFaces = 0;
    string figure;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> figure;
        if (figure == "Tetrahedron") {
            totalFaces += 4;
        } else if (figure == "Cube") {
            totalFaces += 6;
        } else if (figure == "Octahedron") {
            totalFaces += 8;
        } else if (figure == "Dodecahedron") {
            totalFaces += 12;
        } else if (figure == "Icosahedron") {
            totalFaces += 20;
        }
    }
    
    cout << totalFaces;
    
    return 0;
}