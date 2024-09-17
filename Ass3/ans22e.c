#include <stdio.h>

int main() {
    int i, j, k;
    int n = 4; 

    for (i = 0; i < n; i++) {
        for (j = 0; j < n - i - 1; j++) {
            printf("   ");
        }
        for (k = 'A' + i; k <= 'G'; k++) {
            printf("%c ", k);
        }
        for (k = 'G' - 1; k >= 'A' + i; k--) {
            printf("%c ", k);
        }
        printf("\n");
    }

    for (i = n - 2; i >= 0; i--) {
        for (j = 0; j < n - i - 1; j++) {
            printf("   ");
        }
        for (k = 'A' + i; k <= 'G'; k++) {
            printf("%c ", k);
        }     
        for (k = 'G' - 1; k >= 'A' + i; k--) {
            printf("%c ", k);
        }
        printf("\n");
    }

    return 0;
}

