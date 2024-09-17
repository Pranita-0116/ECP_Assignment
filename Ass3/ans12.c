#include <stdio.h>

int main() {
    int base, index;
    unsigned long long result = 1;

    printf("Enter the base: ");
    scanf("%d", &base);

    printf("Enter the index: ");
    scanf("%d", &index);

    if (index < 0) {
        printf("Index should be a non-negative integer.\n");
    } else {
        for (int i = 0; i < index; i++) {
            result *= base;
        }
        printf("%d raised to the power of %d is %llu\n", base, index, result);
    }

    return 0;
}

