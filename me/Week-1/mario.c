#include <cs50.h>
#include <stdio.h>

void print_row(int length, int space_length);
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
        print_row(n,i);
        printf("\n");
    }
}

void print_row(int length, int space_length)
{
    // second loop will print Horizontal
    for (int j = length; j >= 1; j--)
    {
        if (space_length >= j)
        {
            printf("*");
        }
        else
        {
            printf(" ");
        }
    }
}
