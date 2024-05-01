#include <stdio.h>
#include <cs50.h>

void print_row (int length, int space_length);
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
        print_row(n, i);
        printf("\n");
    }
}

void print_row (int length, int space_length)
{
    for(int j = length; j >= space_length; j--)
        {
            if(space_length >= j)
            {
                printf("#");
            } else
            {
                printf(" ");
            }
        }
}
