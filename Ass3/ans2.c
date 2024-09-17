#include <stdio.h>

int main() {
    int number;
    int multiplier = 1;

   
    printf("Enter a number to print its multiplication table: ");
    scanf("%d", &number);

    
    while (multiplier <= 10) {
        printf("%d x %d = %d\n", number, multiplier, number * multiplier);
        multiplier++;
    }

    return 0;
}

