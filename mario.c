#include <stdio.h>
#include <cs50.h>

int main (void)
{
    do
    {
        while (n < 1)
        {
            int n = get_int("Size: ");
        }
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}
