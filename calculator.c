#include <cs50.h>
#include <stdio.h>

// int addition (int x, int y);
int  main (void)
{
    int x = get_int("x: ");
    int y = get_int("y: ");
    // printf("%i\n", addition(x,y));

    // (TYPE CASTING) treating one type as an another type
    // If we dont use TYPE CASTING then the TRUNCATION happens(Truncation is a process or operation that shortens or cuts off a piece of data,
    // such as a string or a file, by removing characters, digits, or bytes from the end.)
    float z = (float) x / (float) y;
    printf("%f\n", z);
}

// int addition (int a, int b)
// {
//     return a + b;
// }
