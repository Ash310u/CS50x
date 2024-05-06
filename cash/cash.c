#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;
    do
    {
        n = get_int("Change Owed: ");
    }
    while (n <= 0);

    int coins = 0;
    do
    {
        if (n >= 25)
        {
            n -= 25;
            coins = coins + 1;
        }
        else if (n >= 10)
        {
            n -= 10;
            coins++;
        }
        else if (n >= 5)
        {
            n -= 5;
            coins++;
        }
        else if (n >= 1)
        {
            n -= 1;
            coins++;
        }
    }
    while (n != 0);

    printf("%i\n", coins);
}
