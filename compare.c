#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int x = get_int("What's x ? ");
    int y = get_int("What's y ? ");
    if (x < y)
    {
        printf("x number is lesser than y\n");
    }
    if (x > y)
    {
        printf("x number is greater than y\n");
    }
    else
    {
        printf("x is equal to y\n");
    }
    return 0;
}
