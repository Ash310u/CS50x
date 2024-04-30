#include <cs50.h>
#include <stdio.h>

// int addition (int x, int y);
int  main (void)
{
    int x = get_int("x: ");
    int y = get_int("y: ");
    // printf("%i\n", addition(x,y));

    // (Type casting) treating one type as an another type
    float z = (float) x / (float) y;
    printf("%f\n", z);
}

// int addition (int a, int b)
// {
//     return a + b;
// }
