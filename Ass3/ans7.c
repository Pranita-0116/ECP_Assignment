#include <stdio.h>

int main() {
    int number;
    int i = 1;
    int j;

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    if (number <= 0) {
        printf("Please enter a positive integer.\n");
    } else {
        printf("Unique pairs of numbers whose product is %d are:\n", number);

        while (i * i <= number) {
            if (number % i == 0) {
                j = number / i;
                if (i <= j) {
                    printf("(%d, %d)\n", i, j);
                }
            }
            i++;
        }
    }

    return 0;
}

