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
    int arrlen = 0;
    while (n > 0) {
        arr[arrlen + 1] = n % 10;
        printf("%i\n", arr[0]);
        n = n / 10;
    }

}
