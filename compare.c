#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int x = get_int("What's x ? ");
    int y = get_int("What's y ? ");
    if (x < y)
    {
        return printf("x is lesser than y\n");
    }
    if (x > y)
    {
        return printf("x is greater than y\n");
    } else
    {
        return printf("x is equal to y\n");
    }
    return 0;
}
