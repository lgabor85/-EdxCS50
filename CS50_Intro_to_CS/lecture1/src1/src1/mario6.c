// Prints an n-by-n grid of bricks, re-prompting user for positive integer

#include <stdio.h>
#include "cs50.h"
#include <cs50.c>

int main(void)
{
    int n = get_int("Size: ");
    while (n < 1)
    {
        n = get_int("Size: ");
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}
