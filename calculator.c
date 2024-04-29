#include <cs50.h>
#include <stdio.h>

void addition (int x, int y);
int  main (void)
{
    int x = get_int("x: ");
    int y = get_int("y: ");
    addition(x,y);
}

void addition (int x, int y)
{
    printf("%i\n", x + y);
}
