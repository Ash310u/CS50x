#include <cs50.h>
#include <stdio.h>

// int addition (int x, int y);
int  main (void)
{
    int x = get_int("x: ");
    int y = get_int("y: ");
    // printf("%i\n", addition(x,y));

    float z = (float) x / (float) y;
    printf("%f\n", z);
}

// int addition (int a, int b)
// {
//     return a + b;
// }
