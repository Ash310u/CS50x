#include <stdio.h>
#include <cs50.h>

int main (void)
{
    // Promt User for positive integer
    int n;
    do
    {
        n = get_int("Size: ");
    }
    while (n < 1);

    // Print an n-by-n grid of bricks
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j <= i + 1; j++)
        {
            printf(" ");
            if(j < i) {
                printf("#");
            }
        }
        printf("\n");
    }
}
