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

    printf("Length: %i\n", num_digit);

    int arr[num_digit];
    for (int i = num_digit - 1; i >= 0; i--) {
        arr[i] = n % 10;
        if (i % 2 != 0)
        {
            int digit = arr[i] * 2;
            int mini_digit;
            if(digit > 9)
            {
                mini_digit = 
            }
        }
        n = n / 10;
    }

}
