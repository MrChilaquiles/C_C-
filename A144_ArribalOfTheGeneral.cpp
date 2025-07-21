#include <iostream>
using namespace std;

int main() {
    int n, mayor, mayorPos, menor, menorPos;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        if (i == 0) {
            mayor = num;
            menor = num;
            mayorPos = i;
            menorPos = i;
        }
        
        if (num > mayor) {
            mayor = num;
            mayorPos = i;
        }
        
        if (num <= menor) {
            menor = num;
            menorPos = i;
        }
    }
    
    
}