#include <stdio.h>

int main() {
    char ch = 'A';
    int rows = 4;

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%c ", ch++);
        }
        printf("\n");
    }

    return 0;
}

