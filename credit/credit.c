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

    long org_n = n;
    int num_digit = 0;

    while (n > 0)
    {
        n = n / 10;
        num_digit++;
    }
    n = org_n;

    printf("%i\n", num_digit);

    int arr[num_digit];
    for (int i = num_digit; i > 0; i--) {
        arr[i] = n % 10;
        n = n / 10;
    }
    printf("%i\n", arr[0]);
}
