#include <stdio.h>

int main() {
    int rows = 5;

    for (int i = 0; i < rows; i++) {
        for (int j = rows; j > i; j--) {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}

