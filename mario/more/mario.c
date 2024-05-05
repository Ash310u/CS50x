#include <cs50.h>
#include <stdio.h>

void print_left(int length, int space_length);
void print_right(int length, int space_length);
// void print_spaced_row(int length, int space_length);
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
    for (int i = 0; i <= n; i++)
    {
        print_left(n,i);
        printf("  ");
        print_right(n,i);
        printf("\n");
    }
}

void print_left(int length, int space_length)
{
    // second loop will print Horizontal
    for (int j = length; j >= 1; j--)
    {
        if (space_length >= j)
        {
            printf("#");
        }
        else
        {
            printf(" ");
        }
    }

}

void print_right(int length, int space_length)
{
    // second loop will print Horizontal
    for (int j = 1; j <= length ; j++)
    {
        if (space_length >= j)
        {
            printf("#");
        }
        else
        {
            printf(" ");
        }
    }
}

// Please IGNORE this, I'm jsut trying to do somtihng...
// void print_spaced_row(int length, int space_length)
// {
//     // second loop will print Horizontal
//     for (int j = 0; j <= length ; j++)
//     {
//         if (length - space_length <= j)
//         {
//             printf("#");
//         }
//         else
//         {
//             printf(".");
//         }
//     }
// }
