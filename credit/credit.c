#include <cs50.h>
#include <stdio.h>

int main (void)
{
    long n;
    do{
        n = get_long("Number: ");
    } while (n[0] != 0)
    printf("%li\n", n);
}
