#include <stdio.h>

void printSemiPyramid(int n) {
    int i, j;

    for (i = 1; i <= n; i++) {
        // Print '#' symbols in the first half
        for (j = 1; j <= i; j++) {
            printf("#");
        }

        // Print spaces between the two halves
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }

        // Print '#' symbols in the second half
        for (j = 1; j <= i; j++) {
            printf("#");
        }

        printf("\n");
    }
}

int main() {
    int rows;

    printf("Enter the number of rows for the semi-pyramid: ");
    scanf("%d", &rows);

    printSemiPyramid(rows);

    return 0;
}
