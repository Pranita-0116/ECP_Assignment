#include <stdio.h>

int main() {
    char character;
    int number;
    int count = 0;

   
    printf("Enter a character: ");
    scanf(" %c", &character);

    
    printf("Enter a number: ");
    scanf("%d", &number);

   
    if (number < 0) {
        printf("Number must be non-negative.\n");
        return 1; 
    }

   
    while (count < number) {
        printf("%c", character);
        count++;
    }
    printf("\n");

    return 0;
}

