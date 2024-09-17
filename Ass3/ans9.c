#include <stdio.h>

int main() {
    int no1, no2, temp;

    printf("Enter two positive integers:\n");
    printf("no1: ");
    scanf("%d", &no1);
    printf("no2: ");
    scanf("%d", &no2);

    if (no1 <= 0 || no2 <= 0) {
        printf("Both numbers must be positive integers.\n");
        return 1;
    }

    int a = no1, b = no2;

    while (b != 0) {
        temp = a % b;
        printf("%d %% %d = %d\n", a, b, temp);
        a = b;
        b = temp;
    }

    printf("GCD of %d and %d is %d\n", no1, no2, a);

    return 0;
}

