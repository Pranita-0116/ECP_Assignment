#include <stdio.h>

int main() {
    int givenNumber, count = 0, num, i, isPrime;

    printf("Enter a number: ");
    scanf("%d", &givenNumber);

    num = givenNumber + 1;

    while (count < 5) {
        isPrime = 1;
        for (i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime && num > 1) {
            printf("%d ", num);
            count++;
        }
        num++;
    }
    printf("\n");

    return 0;
}

