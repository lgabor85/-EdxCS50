#include <stdio.h>

void printMirroredSemiPyramid(int n)
{
    int i, j;

    for (i = 1; i <= n; i++)
    {
        // Print spaces in the first half
        for (j = 1; j <= n - i; j++)
        {
            printf(" ");
        }

        // Print '#' symbols in the first half
        for (j = 1; j <= i; j++)
        {
            printf("#");
        }

        // Print spaces between the two halves
        printf(" ");

        // Print '#' symbols in the second half
        for (j = 1; j <= i; j++)
        {
            printf("#");
        }

        printf("\n");
    }
}

int main()
{
    int rows;

    printf("Enter the number of rows for the mirrored semi-pyramid: ");
    scanf("%d", &rows);

    printMirroredSemiPyramid(rows);

    return 0;
}
