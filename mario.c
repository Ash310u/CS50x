#include <stdio.h>
#include <cs50.h>

int main (void)
{
    const int n = 5;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}
