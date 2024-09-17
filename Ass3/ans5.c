#include <stdio.h>

int main() {
    int number;
    int factor = 1;

  
    printf("Enter a positive integer: ");
    scanf("%d", &number);

   
    if (number <= 0) {
        printf("Please enter a positive integer.\n");
    } else {
        printf("Factors of %d excluding the number itself are:\n", number);
        
        while (factor < number) {
            if (number % factor == 0) {
                printf("%d ", factor);
            }
            factor++;
        }
        
        printf("\n");
    }

    return 0;
}

