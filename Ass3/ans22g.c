#include <stdio.h>

int main() {
    int rows = 4;

    for (int i = 0; i < rows; i++) {
        for (char ch = 'A' + i; ch < 'A' + rows; ch++) {
            printf("%c ", ch);
        }
        printf("\n");
    }

    return 0;
}

