#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;
    do {
        n = get_int("Change Owed: ");
    } while (n < 0);

    int coins = 0;
    do {
        if(n >= 25) {
            n -= 25;
            coins = coins + 1 ;
        }
        // else if(n > 25) {
            // coins ++;
        // }
    } while (n < 1);

    printf("%i\n", n -= 25);
    printf("%i\n", coins);
}
