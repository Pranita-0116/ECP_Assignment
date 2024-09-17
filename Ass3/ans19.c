#include <stdio.h>

int main() {
    int start, end;

    printf("Enter the range (two numbers): ");
    scanf("%d %d", &start, &end);

    for (int i = start; i <= end; i++) {
        printf("%d\n", i);
        for (int j = 1; j <= 10; j++) {
            printf("%d ", i * j);
        }
        printf("\n");
    }

    return 0;
}

