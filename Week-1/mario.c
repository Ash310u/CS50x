#include <cs50.h>
#include <stdio.h>

// void print_row(int length, int space_length);
int main(void)
{
    // Promt User for positive integer
    int n;
    do
    {
        n = get_int("Size: ");
    }
    while (n < 1);

    // Print an n-by-n grid of bricks
    // first loop will print Vertical
    for (int i = 0; i < n; i++)
    {
        // second loop will print Horizontal
        for (int j = n; j >= i + 1; j--)
        {
            if( i > j )
            {
                printf(" ");
            }
            if (i <= j) {
                printf("* ");
            }
        }

        printf("\n");
    }
}
