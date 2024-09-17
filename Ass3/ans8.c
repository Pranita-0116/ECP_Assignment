#include <stdio.h>

int main() {
    int number;
    int factor = 2;

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    if (number <= 1) {
        printf("Enter a number greater than 1.\n");
    } else {
        printf("Prime factors of %d are:\n", number);

        while (number > 1) {
            while (number % factor == 0) {
                printf("%d ", factor);
                number /= factor;
            }
            factor++;
        }

        printf("\n");
    }

    return 0;
}

