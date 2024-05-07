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

    int sub_total = 0;
    for (int i = num_digit - 1; i >= 0; i--) {
        if (i % 2 == 0)
        {
            int digit = (n % 10) * 2;
            if(digit > 9)
            {
                while (digit > 0)
                {
                    sub_total += digit % 10;
                    digit = digit / 10;
                }
                printf("if: %i\n", digit);
            }
            else
            {
                sub_total += digit;
                printf("else: %i\n", digit);
            }
        }
        else
        {
            sub_total += (n % 10);
        }
        n = n / 10;
    }

    if(sub_total % 10 == 0)
    {
        if(num_digit == 15)
        printf("VISA: %i\n", sub_total);
    }
    else
    {
        printf("INVALID %i\n", sub_total);
    }
}
