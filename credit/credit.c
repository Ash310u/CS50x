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

    int arr[num_digit];
    int sub_total = 0;
    for (int i = num_digit - 1; i >= 0; i--)
    {
        arr[i] = n % 10;
        if (i % 2 != 0)
        {
            int digit = arr[i] * 2;
            if (digit > 9)
            {
                while (digit > 0)
                {
                    sub_total += digit % 10;
                    digit = digit / 10;
                }
            }
            else
            {
                sub_total += digit;
            }
        }
        else
        {
            sub_total += arr[i];
        }
        n = n / 10;
    }

    if (sub_total % 10 == 0)
    {
        if (num_digit == 15 && arr[15] == 3)
        {
            if (arr[14] == 4 || arr[14] == 7)
            {
                printf("AMEX\n");
            }
        }
        else if (num_digit == 16 && arr[16] == 5)
        {
            if (arr[15] == 1 || arr[15] == 2 || arr[15] == 3 || arr[15] == 4 || arr[15] == 5)
            {
                printf("MASTERCARD\n");
            }
        }
        printf("VISA\n");
    }
    else
    {
        printf("INVALID \n");
    }
}
