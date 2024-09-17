#include <stdio.h>

int main() {
    int number;
    unsigned long long factorial = 1; 

  
    printf("Enter a non-negative integer: ");
    scanf("%d", &number);

  
    if (number < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
       
        int i = number;
        while (i > 1) {
            factorial *= i;
            i--;
        }

        printf("Factorial of %d is %llu\n", number, factorial);
    }

    return 0;
}

