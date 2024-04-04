#include <stdio.h>

void printPyramid(int n) {
    int i, j, k;
    
    for (i = 1; i <= n; i++) {
        // Print spaces
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }
        
        // Print '#' symbols
        for (k = 1; k <= 2 * i - 1; k++) {
            printf("#");
        }
        
        printf("\n");
    }
}

int main() {
    int rows;
    
    printf("Enter the number of rows for the pyramid: ");
    scanf("%d", &rows);
    
    printPyramid(rows);
    
    return 0;
}
