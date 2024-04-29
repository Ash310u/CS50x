#include <cs50.h>
#include <stdio.h>

int addition (int x, int y);
int  main (void)
{
    int x = get_int("x: ");
    int y = get_int("y: ");
    int z = addition(x,y);
    printf("%i\n ", z);
}

int addition (int x, int y)
{
    return x + y;
}
