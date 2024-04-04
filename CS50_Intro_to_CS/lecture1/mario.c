#include "cs50.h"
#include <cs50.c>
#include <stdio.h>

int get_height(void);
void print_grid(int height);

int main(void)
{
    // Get size of grid
    int n = get_height();

    // Print grid of bricks
    print_grid(n);
}

int get_height(void)
{
    int n;
    do
    {
        n = get_int("Height: ");
    }
    while (n < 1 || n > 8);
    return n;
}

void print_grid(int height)
{
    int i, j;
    for (i = 0; i < height; i++)
    {
        // Print spaces in the first half
        for (j = 2; j <= height - i; j++)
        {
            printf(" ");
        }

        // Print '#' symbols in the first half
        for (j = 0; j <= i; j++)
        {
            printf("#");
        }

        // Print spaces between the two halves
        printf("  ");

        // Print '#' symbols in the 2nd half
        for (j = 0; j <= i; j++)
        {
            printf("#");
        }

        printf("\n");
    }
}