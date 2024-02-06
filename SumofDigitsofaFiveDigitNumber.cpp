#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n, sum = 0;
    printf("Insert integer number of 5 digits: ");
    scanf("%d", &n);
    while (n > 0) {
        sum += n % 10; // In each iteration of the loop, the last digit of the number n is taken using the modulo operator
        printf("\nValue of sum: %d", sum);
        n /= 10; // The last digit of the original number is removed and moved to the right to store the new number in n
        printf("\nValue of n: %d", n);
    }

    printf("%d", sum);
    return 0;
}
