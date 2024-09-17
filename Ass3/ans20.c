#include <stdio.h>
#include <math.h>

int main() {
    int i, j, num, isPrime;
    int n, sum, temp, digit;

    // Print prime numbers between 1 and 100
    printf("Prime numbers between 1 and 100:\n");
    for (i = 2; i <= 100; i++) {
        isPrime = 1;
        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime) {
            printf("%d ", i);
        }
    }
    printf("\n");

    // Print Armstrong numbers between 1 and 500
    printf("Armstrong numbers between 1 and 500:\n");
    for (i = 1; i <= 500; i++) {
        n = i;
        sum = 0;
        while (n != 0) {
            digit = n % 10;
            sum += digit * digit * digit;
            n /= 10;
        }
        if (sum == i) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}

