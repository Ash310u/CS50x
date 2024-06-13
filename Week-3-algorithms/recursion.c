#include <cs50.h>
#include <stdio.h>

void draw(int n);
int main(void)
{
    int height = get_int("Height: ");
    draw(height);
}

void draw(int n)
{
    // If noting to draw
    if(n <= 0)
    {
        return;
    }
    // Print pyramid height of n-1
    draw(n - 1);

    // Print one more row
    for(int i = 0; i < n ; i++)
    {
        printf("#");
    }
    printf("\n");
}
