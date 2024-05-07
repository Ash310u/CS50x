#include <cs50.h>
#include <stdio.h>

int main(void)
{
    long n;
    do
    {
        n = get_long("Number: ");
    }
    while (n <= 0);

    int arr[16];
    for (int i = 0; i < 15; i++) {
        arr[i] = n % 10;
        printf("%i\n", arr[i]);
        n = n / 10;
    }

}
