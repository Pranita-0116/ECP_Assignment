#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int magicNumber, guess, chances = 0;

    srand(time(NULL));
    magicNumber = rand() % 1000 + 1;

    do {
        printf("Guess the magic number (between 1 and 1000): ");
        scanf("%d", &guess);

        if (guess < magicNumber) {
            printf("Left\n");
        } else if (guess > magicNumber) {
            printf("Right\n");
        } else {
            printf("Congrats! You won.\n");
            break;
        }

        chances++;
    } while (chances < 10);

    if (chances == 10 && guess != magicNumber) {
        printf("Sorry, you've used all 10 chances. The magic number was %d.\n", magicNumber);
    }

    return 0;
}

